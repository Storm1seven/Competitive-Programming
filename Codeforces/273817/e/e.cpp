# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
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
ll n;
vll tree, lazy;
void build(ll index, ll start, ll end){
    if (start == end){
        tree[index] = 1;
        return;
    }
    ll mid = (start+end)/2;
    build(2*index, start, mid);
    build(2*index+1, mid+1, end);
    tree[index] = tree[2*index]+tree[2*index+1];
}
void update(ll index, ll start, ll end, ll l, ll r, ll val){
    if (lazy[index]!=-1){
        tree[index] = (end-start+1)*lazy[index];
        if (start!=end){
            lazy[2*index] = lazy[index];
            lazy[2*index+1] = lazy[index];
        }
        lazy[index] = -1;
    }
    if (l > end || r < start) return;
    if (l <= start and r >= end){
        tree[index] = (end-start+1)*val;
        if (start!=end){
            lazy[2*index] = val;
            lazy[2*index+1] = val;
        }
        return;
    }
    ll mid = (start+end)/2;
    update(2*index, start, mid, l, r, val);
    update(2*index+1, mid+1, end, l, r, val);
    tree[index] = tree[2*index]+tree[2*index+1];
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    tree.resize(4*n, 0);
    lazy.resize(4*n, -1);
    build(1, 0, n-1);
    ll q; cin>>q;
    ll l, r, type;
    loop(i, 0, q, 1){
        cin>>l>>r>>type;
        type--;
        update(1, 0, n-1, l-1, r-1, type);
        cout<<tree[1]<<endl;
    }
    return 0;
}
