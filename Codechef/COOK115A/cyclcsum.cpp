# include<bits/stdc++.h>
// #include<prettyprint.hpp>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll> >
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll> >
# define mll map<ll, ll>
# define sll set<ll>
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
ll max3(ll a, ll b, ll c) {return max(max(a, b), c);}
vll a;
struct node{
	ll maxleftsum, maxrightsum, sum, maxsubsum;
	void merge(node left, node right){
		maxleftsum = max(left.maxleftsum, left.sum+right.maxleftsum);
		maxrightsum = max(left.maxrightsum + right.sum, right.maxrightsum);
		sum = left.sum + right.sum;
		maxsubsum = max3(left.maxsubsum, right.maxsubsum, left.maxrightsum+right.maxleftsum);
	}
	void createNode(int val){
		maxleftsum = sum = maxrightsum = maxsubsum = val;
	}
};
vector<node> tree;
void build(ll index, ll l, ll r){
	if (l == r){
		tree[index].createNode(a[l]);
        return;
	}
    ll mid = (l+r)/2;
    build(2*index, l, mid);
    build(2*index+1, mid+1, r);
    tree[index].merge(tree[2*index], tree[2*index+1]);
}
node query(node n, ll l, ll r, ll u, ll v, ll index){
	if (l == u and r == v){
		n = tree[index];
		return n;
	}
	else{
		ll mid = (l+r)/2;
		if (v <= mid) return query(n, l, mid, u, v, 2*index);
		if (mid < u) return query(n, mid+1, r, u, v, 2*index+1);
		n.merge(query(n, l, mid, u, mid, 2*index), query(n, mid+1, r, mid+1, v, 2*index+1));
		return n;
	}
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    loop(_, 0, t, 1){
        ll n; cin>>n;
        tree.clear();
        tree.resize(8*n);
        vll z = vin(n);
        a.clear();
        for(auto i:z) a.append(i);
        for(auto i:z) a.append(i);
        build(1, 0, 2*n-1);
        node temp;
        loop(i, 0, n, 1){
            cout<<query(temp, 0, 2*n-1, 0+i, n-1+i, 1).maxsubsum;
            if (i == n-1) cout<<endl;
            else cout<<" ";
        }
    }
	return 0;
} 