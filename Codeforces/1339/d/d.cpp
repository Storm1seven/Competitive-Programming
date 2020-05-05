# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
vector< vector<ll> > d;
vector<ll> dist, parent;
set<ll> leaf;
ll n;
void dfs(ll v){
    ll flag = 0;
    for(auto i:d[v]){
        if (dist[i] == -1){
            flag = 1;
            dist[i] = dist[v]+1;
            parent[i] = v;
            dfs(i);
        }
    }
    if (!flag) leaf.insert(v);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    d.resize(n);
    dist.resize(n, -1);
    parent.resize(n, -1);
    for(ll i = 0; i+1 < n; i++){
        ll u, v; cin >> u >> v;
        d[--u].push_back(--v);
        d[v].push_back(u);
    }
    ll root;
    for(ll i = 0; i < n; i++) if (d[i].size() == 1) root = i;
    dist[root] = 0;
    dfs(root);
    ll count = 0;
    set<ll> up;
    for(auto i:leaf){
        count+=dist[i]%2;
        up.insert(parent[i]);
    }
    up.insert(d[root][0]);
    ll minf;
    if (count == 0) minf = 1;
    else minf = 3;
    leaf.insert(root);
    ll maxf = n-1-leaf.size()+up.size();
    cout << minf << ' ' << maxf << '\n';
    return 0;
}
