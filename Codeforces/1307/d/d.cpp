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
ll n, m, k;
vll special, visS;
vvll d;
ll bfs(ll src){
    vll vis(n, 0);
    vll dist(n, 0);
    queue<ll> q;
    q.push(src);
    vis[src] = 1;
    dist[src] = 0;
    while(q.size()){
        ll f = q.front();
        q.pop();
        for(auto i:d[f]){
            if(!vis[i]){
                vis[i] = 1;
                dist[i] = dist[f]+1;
                q.push(i);
            }
        }
    }
    return dist[n-1];
}
pll getClosestSpecial(ll src){
    vll vis(n, 0);
    vll dist(n, 0);
    queue<ll> q;
    q.push(src);
    vis[src] = 1;
    dist[src] = 0;
    while(q.size()){
        ll f = q.front();
        q.pop();
        for(auto i:d[f]){
            if(!vis[i]){
                vis[i] = 1;
                dist[i] = dist[f]+1;
                q.push(i);
                if (visS[i]){
                    return make_pair(i, dist[i]);
                }
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m>>k;
    special = vin(k);
    d.resize(n);
    visS.resize(200100, 0);
    ll flagSpecial = 0;
    for(auto i:special) visS[i-1] = 1;
    ll x, y;
    loop(i, 0, m, 1){
        cin>>x>>y;
        d[x-1].append(y-1);
        d[y-1].append(x-1);
        if (visS[x-1] and visS[y-1]) flagSpecial = 1;
    }
    if (flagSpecial){
        cout<<bfs(0)<<endl;
    }
    else{
        ll mindist = 1000000000;
        pll cmin;
        ll ans = 100000000000;
        for(auto i:special){
            cmin = getClosestSpecial(i-1);
            x = i-1;
            y = cmin.first;
            d[x].append(y);
            d[y].append(x);
            ans = min(ans, bfs(0));
            d[x].pop_back();
            d[y].pop_back();
        }
        cout<<ans<<endl;
    }
    return 0;
}
