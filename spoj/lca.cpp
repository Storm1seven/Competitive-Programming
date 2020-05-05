# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, t, logN;
vector<vector<ll> > d, dp;
vector<ll> vis, tin, tout;
void dfs(ll v, ll p){
    tin[v] = t++;
    vis[v] = 1;
    dp[v][0] = p;
    for(ll i = 1; i <= logN; i++) dp[v][i] = dp[dp[v][i-1]][i-1];
    for(auto i:d[v]){
        if (!vis[i]){
            dfs(i, v);
        }
    }
    tout[v] = t++;
}
bool isAncestor(ll u, ll v){
    if (tin[u] <= tin[v] and tout[u] >= tout[v]) return true;
    return false;
}
ll lca(ll u, ll v){
    if (isAncestor(u, v)) return u;
    if (isAncestor(v, u)) return v;
    for(ll i = 1; i >= 0; i--){
        if (!isAncestor(dp[u][i], v)){
            u = dp[u][i];
        }
    }
    return dp[u][0];
}
void clear(){
    d.assign(n, vector<ll>());
    t = 0;
    logN = ceil(log2(n));
    vis.assign(n, 1);
    tin.assign(n, 0);
    tout.assign(n, 0);
    dp.assign(n, vector<ll>(logN+1));
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll test; cin>>test;
    for(ll _ = 1; _ <= test; _++){
        cin >> n;
        clear();
        for(ll i = 0; i < n; i++){
            ll num; cin >> num;
            for(ll j = 0; j < num; j++){
                ll v; cin >> v;
                d[i].push_back(--v);
                vis[v] = 0;
            }
        }
        ll root;
        for(ll i = 0; i < n; i++) if (vis[i]) root = i;
        vis[root] = 0;
        dfs(root, root);
        ll q; cin >> q;
        cout << "Case " << _ << ":\n";
        for(ll i =0 ; i < q; i++){
            ll u, v; cin >> u >> v;
            cout << lca(--u, --v)+1 << endl;
        }
    }
    return 0;
}