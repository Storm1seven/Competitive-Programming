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
ll n, m;
vvll d;
vll ts, vis;
void dfs(ll v){
    vis[v] = 1;
    for(auto i:d[v]) if (!vis[i]) dfs(i);
    ts.append(v);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    d.resize(n);
    vis.resize(n, 0);
    ll x, y;
    loop(i, 0, m ,1){
        cin>>x>>y;
        d[x-1].append(y-1);
    }
    loop(i , 0, n, 1) if (!vis[i]) dfs(i);
    reverse(all(ts));
    vll dist(n, -1);
    for(auto i:ts){
        if (dist[i] == -1) dist[i] = 0;
        for(auto j:d[i]) dist[j] = max(dist[j], dist[i]+1);
    }
    ll ans = *max_element(all(dist));
    cout<<ans<<endl;
    return 0;
}