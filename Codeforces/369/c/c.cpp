# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n;
vector<vector<int> >d;
vector<int> vis, cnt;
void dfs(int v){
    vis[v] = 1;
    for(auto i:d[v]){
        if (!vis[i]){
            dfs(i);
            cnt[v]+=cnt[i];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    d.resize(n);
    vis.assign(n, 0);
    cnt.assign(n, 0);
    for(int i = 0; i < n-1; i++){
        int u, v, type; cin >> u >> v >> type;
        --u, --v;
        d[u].push_back(v);
        d[v].push_back(u);
        if (type == 2){
            cnt[u] = cnt[v] = 1;
        }
    }
    dfs(0);
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if (cnt[i] == 1) ans.push_back(i+1);
    }
    cout << ans.size() << endl;
    for (auto i:ans) cout << i << " ";
    cout << endl;
    return 0;
}
