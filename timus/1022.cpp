# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
vector< vector<ll> > d;
ll n;
vector<ll> vis;
vector<ll> st;
void dfs(ll v){
    vis[v] = 1;
    for(auto i:d[v]){
        if (!vis[i]) dfs(i);
    }
    st.push_back(v);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    d.resize(n);
    vis.resize(n, 0);
    for(ll i = 0; i < n; i++){
        while(1){
            ll u; cin >> u;
            if (!u) break;
            u--;
            d[i].push_back(u);
        }
    }
    for(ll i = 0; i < n; i++){
        if(!vis[i]) dfs(i);
    }
    while(st.size()){
        cout << st.back()+1 << ' ';
        st.pop_back();
    }
    return 0;
}