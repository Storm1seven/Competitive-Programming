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
ll n, m;
vvll d;
vll vis;
ll cnt = 0;
void dfs(ll v){
    vis[v] = 1;
    for(auto i:d[v]){
        if (vis[i] == 0) dfs(i);
        else if (vis[i] == 1) cnt++;
    }
    vis[v] = 2;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    ll x, y;
    d.resize(n);
    loop(i, 0, m, 1){
        cin>>x>>y;
        x--; y--;
        d[x].append(y);
    }
    loop(i, 0, n, 1){
        vis.clear();
        vis.resize(n);
        cnt = 0;
        dfs(i);
        loop(i, 0, n, 1){
            if (!vis[i]) dfs(i);
        }
        if (cnt <= 1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
