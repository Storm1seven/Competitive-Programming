# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
using namespace std;
// # define ll long long
# define ll int
# define vll vector<ll>
# define vvll vector<vector<ll> >
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll> >
# define mll map<ll, ll>
# define sll set<ll>
# define usll unordered_set<ll>
# define schar set<char>
# define pll pair<ll, ll>
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define popb pop_back
# define add insert
# define all(v) v.begin(), v.end()
# define rall(v) v.rbegin(), v.rend()
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
vll vin(ll n){vll a(n);loop(i, 0, n, 1) cin>>a[i];return a;}
ll intin() {ll n; cin>>n; return n;}
char charin(){char a; cin>>a; return a;}
string strin(){string s; cin>>s; return s;}
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
vll a(300100);
class node{
	public:
		ll val, start, end;
		node* left;
		node* right;
		node(){}
		node(ll v, ll s, ll e, node* l, node* r){
			val = v;
			start = s;
			end = e;
			left = l;
			right = r;
		}
};
node* tree[300100];
int treex[4*300100];
unordered_map<ll, queue<ll> >nextIndex;
unordered_map<ll, ll>firstIndex;
node* persistentBuild(int l, int r){
	node* temp = new node(0, l, r, NULL, NULL);
	if (l == r){
		if (l == firstIndex[a[l]]){
			temp->val = 1;
		}
		return temp;
	}
	ll mid = (l+r)/2;
	temp->left = persistentBuild(l,mid);
	temp->right = persistentBuild(mid+1,r);
	temp->val = temp->left->val + temp->right->val;
	return temp;
}
node* persistentUpdate(node* root, ll pos, ll value){
	if(!root) return NULL;
	node* temp = new node(root->val, root->start, root->end, root->left, root->right);
	if(temp->start == temp->end and temp->start == pos){
		temp->val = value;
		return temp;
	}
	ll mid = (temp->start + temp->end)/2;
	if (pos > mid) temp->right = persistentUpdate(temp->right, pos, value);
	else temp->left = persistentUpdate(temp->left, pos, value);
	ll tmp = 0;
	if (temp->left) tmp+=temp->left->val;
	if (temp->right) tmp+=temp->right->val;
	temp->val = tmp;
	return temp;
}
ll persistentQuery(node* temp, ll l, ll r){
	if (!temp) return 0;
	if (l > temp->end || temp->start > r) return 0;
	if (l <= temp->start && r >= temp->end) return temp->val;
	return persistentQuery(temp->left,l,r) + persistentQuery(temp->right,l,r);
}
void update(ll index, ll start, ll end, ll pos){
    if (start == end and start == pos){
        treex[index] = 1;
        return;
    }
    ll mid = (start+end)/2;
    if (pos <= mid) update(2*index, start, mid, pos);
    else update(2*index+1, mid+1, end, pos);
    treex[index] = treex[2*index]+treex[2*index+1];
}
ll query(ll index, ll start, ll end, ll l, ll r){
    if (l > end || r < start) return 0;
    if (l <= start && end <= r) return treex[index];
    ll mid = (start+end)/2;
    return query(2*index, start, mid, l, r)+query(2*index+1, mid+1, end, l, r);
}
vll indices[300100];
int main(){
	ll n, m; scanf("%d%d", &n, &m);
	loop(i, 0, m, 1){
		scanf("%d", &a[i]);
		if (firstIndex.find(a[i]) != firstIndex.end()) nextIndex[a[i]].push(i);
		else firstIndex[a[i]] = i;
        indices[a[i]].append(i);
	}
	tree[0] = persistentBuild(0, m-1);
	loop(i, 1, m, 1){
		tree[i] = persistentUpdate(tree[i-1], i-1, 0);
		if (nextIndex[a[i-1]].size()!=0){
			tree[i] = persistentUpdate(tree[i], nextIndex[a[i-1]].front(), 1);
			nextIndex[a[i-1]].pop();
		}
	}
    vpll ans(n+1);
    loop(i, 1, n+1, 1) ans[i] = make_pair(i, i);
    loop(i, 0, m, 1) ans[a[i]].first = 1;
    vll vis(n+1, 0);
    loop(i, 0, m, 1){
        if (!vis[a[i]]){
            ans[a[i]].second+=query(1, 1, n, a[i]+1, n);
            update(1, 1, n, a[i]);
            vis[a[i]] = 1;
            indices[a[i]].append(m-1);
        }
    }
    loop(i, 1, n+1, 1) if(!vis[i]) ans[i].second+=query(1, 1, n, i+1, n);
    loop(i, 1, n+1, 1){
        loop(j, 1, indices[i].size(), 1){
            ans[i].second = max(ans[i].second, persistentQuery(tree[indices[i][j-1]], indices[i][j-1], indices[i][j]));
        }
    }
    loop(i, 1, n+1, 1){
        printf("%d %d\n", ans[i].first, ans[i].second);
    }
	return 0;
}