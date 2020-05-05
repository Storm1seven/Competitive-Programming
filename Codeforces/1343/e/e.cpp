# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, m, a, b, c;
vector<vector<ll> > d;
vector<ll> w;
void clear(){
    d.clear();
    d.resize(n);
    w.assign(m+1, 0);
}
vector<ll> bfs(ll src){
    vector<ll> dist(n, -1);
    queue<ll> q;
    dist[src] = 0;
    q.push(src);
    while(q.size()){
        ll f = q.front();
        q.pop();
        for(auto i:d[f]){
            if (dist[i] == -1){
                dist[i] = dist[f]+1;
                q.push(i);
            }
        }
    }
    return dist;
}
void solve(){
    cin >> n >> m >> a >> b >> c;
    --a, --b, --c;
    clear();
    for(ll i = 1; i <= m; i++) cin >> w[i];
    sort(w.begin(), w.end());
    for(ll i = 1; i <= m; i++) w[i]+=w[i-1];
    for(ll i = 0; i < m; i++){
        ll u, v; cin >> u >> v;
        d[--u].push_back(--v);
        d[v].push_back(u);
    }
    vector<ll> distA = bfs(a);
    vector<ll> distB = bfs(b);
    vector<ll> distC = bfs(c);
    ll ans = LLONG_MAX;
    for(ll i = 0; i < n; i++){
        ll one = distA[i]+distB[i]+distC[i];
        ll two = distB[i];
        if (one > m) continue;
        ans = min(ans, w[one]+w[two]);
    }
    cout << ans << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
