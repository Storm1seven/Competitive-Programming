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
vll parent, weight;
ll find(ll u){
    if (parent[u] == u) return u;
    return parent[u] = find(parent[u]);
}
void join(ll u, ll v){
    ll a = find(u);
    ll b = find(v);
    if (a == b) return;
    if (weight[a] < weight[b]) swap(a, b);
    parent[b] = a;
    weight[a]+=weight[b];
}
void init(ll u){
    parent[u] = u;
    weight[u] = 1;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    while(t--){
        ll n, k; cin>>n>>k;
        parent.clear(), weight.clear();
        parent.resize(n), weight.resize(n);
        string s; cin>>s;
        loop(i, 0, n, 1) init(i);
        loop(i, 0, n, 1){
            if (i-k >= 0) join(i, i-k);
            join(i, n-1-i);
        }
        map<ll, map<char, ll> >m;
        loop(i, 0, n, 1){
            m[parent[i]][s[i]]++;
        }
        ll ans = 0;
        for(auto i:m){
            ll sum = 0;
            ll ma = 0;
            for(auto j:i.second){
                ma = max(j.second, ma);
                sum+=j.second;
            }
            ans+=(sum-ma);
        }
        cout<<ans<<endl;
    }
    return 0;
}
