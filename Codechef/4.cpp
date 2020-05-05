# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
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
ll n, q, k;
vll a;
vvll tree;
void build(ll index, ll start, ll end){
    if (start == end){
        tree[a[start]%k][index] = 1;
        return;
    }
    ll mid = (start+end)/2;
    build(2*index, start, mid);
    build(2*index+1, mid+1, end);
    loop(i, 0, k, 1) tree[i][index] = tree[i][2*index]+tree[i][2*index+1];
}
void update(ll index, ll start, ll end, ll pos, ll val){
    if(start == end and start == pos){
        ll curr = 0;
        loop(i, 0, k, 1){
            if (tree[i][index]) curr = i;
        }
        tree[curr][index] = 0;
        curr+=val;
        curr%=k;
        tree[curr][index] = 1;
        return;
    }
    ll mid = (start+end)/2;
    if (pos <= mid) update(2*index, start, mid, pos, val);
    else update(2*index+1, mid+1, end, pos, val);
    loop(i, 0, k, 1) tree[i][index] = tree[i][2*index]+tree[i][2*index+1];
}
ll query(ll index, ll start, ll end, ll l, ll r, ll rem){
    if (r < start || l > end) return 0;
    if (l <= start && r >= end) return tree[rem][index];
    ll mid = (start+end)/2;
    return query(2*index, start, mid, l, r, rem)+query(2*index+1, mid+1, end, l, r, rem);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>q>>k;
    tree.resize(k, vll(4*n, 0));
    a = vin(n);
    build(1, 0, n-1);
    ll type, x, y, p, val;
    loop(i, 0, q, 1){
        cin>>type;
        if (type == 1){
            cin>>p>>val;
            update(1, 0, n-1, p-1, val);
        }else{
            cin>>x>>y>>val;
            cout<<query(1, 0, n-1, x-1, y-1, val)<<endl;
        }
    }
    return 0;
}