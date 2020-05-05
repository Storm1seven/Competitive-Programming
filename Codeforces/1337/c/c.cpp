# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, k;
vector<vector<ll> >d;
vector<ll> dist, parent, treesize;
void dfs(ll v){
    treesize[v] = 1;
    for(auto i:d[v]){
        if (dist[i] == -1){
            dist[i] = 1+dist[v];
            parent[i] = v;
            dfs(i);
            treesize[v]+=treesize[i];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    parent.resize(n, -1);
    dist.resize(n, -1);
    treesize.resize(n);
    d.resize(n);
    for(ll i = 0; i < n-1; i++){
        ll u, v; cin >> u >> v;
        d[--u].push_back(--v);
        d[v].push_back(u);
    }
    dist[0] = 0;
    dfs(0);
    vector<ll> s;
    for(ll i = 0; i < n; i++){
        s.push_back(dist[i]-treesize[i]+1);
    }
    sort(s.rbegin(), s.rend());
    ll ans = 0;
    for (ll i =0; i < k; i++) ans+=s[i];
    cout << ans << endl;
    return 0;
}
