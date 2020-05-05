# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// #include<prettyprint.hpp>
using namespace std;
# define ll long long
// # define ll int
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
ll n, N = 100010, mod = 1000000007;
string s;
vector<vvll> tree, pwA, pwB, a;
vvll A(2, vll(2, 0)), B(2, vll(2, 0)), I(2, vll(2, 0));
vll lazy;
vvll mul(vvll p1, vvll p2){
	vvll ans(2,vll(2,0));
	loop(i, 0, 2, 1){
		loop(j, 0, 2, 1){
			loop(k, 0, 2, 1){
				ans[i][j]=(ans[i][j]+p1[i][k]*p2[k][j])%mod;
			}
		}
	}
	return ans;
}
void build(ll index, ll start, ll end){
    if (start == end){
        tree[index] = a[start-1];
        return;
    }
    ll mid = (start+end)/2;
    build(2*index, start, mid);
    build(2*index+1, mid+1, end);
    tree[index] = mul(tree[2*index], tree[2*index+1]);
}
void lazyUpdate(ll index, ll start, ll end, ll l, ll r, ll val){
    if (lazy[index]){
        if (lazy[index] == 1) tree[index] = pwA[end-start+1];
        else tree[index] = pwB[end-start+1];
		if (start!=end){
			lazy[2*index] = lazy[index];
			lazy[2*index+1] = lazy[index];
		}
		lazy[index] = 0;
	}
	if (l > end || r < start) return;
	if (l<=start and end<=r){
		if (val == 1) tree[index] = pwA[end-start+1];
        else tree[index] = pwB[end-start+1];
		if (start!=end){
			lazy[2*index] = val;
			lazy[2*index+1] = val;
		}
		return;
	}
	ll mid = (start+end)/2;
    lazyUpdate(2*index, start, mid, l, r, val);
    lazyUpdate(2*index+1, mid+1, end, l, r, val);
	tree[index] = mul(tree[2*index], tree[2*index+1]);
}
vvll query(ll index, ll start, ll end, ll l, ll r){
    if (r < start || l > end) return I;
    if (lazy[index]){
        if (lazy[index] == 1) tree[index] = pwA[end-start+1];
        else tree[index] = pwB[end-start+1];
		if (start!=end){
			lazy[2*index] = lazy[index];
			lazy[2*index+1] = lazy[index];
		}
		lazy[index] = 0;
	}
    if (l<=start and r>=end) return tree[index];
    ll mid = (start+end)/2;
    return mul(query(2*index, start, mid, l, r), query(2*index+1, mid+1, end, l, r));
}
void clear(){
    tree.clear();
    tree.resize(4*n);
    a.clear();
    a.resize(n);
    lazy.clear();
    lazy.resize(4*n, 0);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    loop(i, 0, 2, 1) I[i][i] = 1;
    loop(i, 0, 2, 1) loop(j, 0, 2, 1) A[i][j] = B[i][j] = 1;
    A[1][0] = B[0][1] = mod-1;
    pwA.append(I);
    pwB.append(I);
    loop(i, 1, N, 1){
        pwA.append(mul(pwA.back(), A));
        pwB.append(mul(pwB.back(), B));
    }
    ll t, l, r, x, y; cin>>t;
    char c;
    loop(_, 0, t, 1){
        cin>>n;
        clear();
        string s; cin>>s;
        loop(i, 0, n, 1){
            if (s[i] == 'A') a[i] = A;
            else a[i] = B;
        }
        build(1, 1, n);
        ll q; cin>>q;
        loop(i, 0, q, 1){
            ll type; cin>>type;
            if (type == 1){
                cin>>l>>r>>c;
                lazyUpdate(1, 1, n, l, r, c-'A'+1);
            }
            else{
                cin>>l>>r>>x>>y;
                vvll tmp=query(1, 1, n, l, r);
			    cout<<(x*tmp[0][0]+y*tmp[1][0])%mod<<" "<<(x*tmp[0][1]+y*tmp[1][1])%mod<<endl;
            }
        }
    }
    return 0;
}