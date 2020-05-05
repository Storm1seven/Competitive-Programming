# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, k, m, col = 0;
vector<vector<ll> > d;
vector<ll> color;
void dfs(ll v){
    color[v] = col;
    for(auto i:d[v]){
        if (!color[i]) dfs(i);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> k >> m;
    color.resize(n, 0);
    d.resize(n);
    for(ll i = 0; i < k; i++){
        ll u, v; cin >> u >> v;
        d[--u].push_back(--v);
        d[v].push_back(u);
    }
    for(ll i = 0; i < n; i++){
        if (!color[i]){
            col++;
            dfs(i);
        }
    }
    cout << col-1 << endl;
    return 0;
}