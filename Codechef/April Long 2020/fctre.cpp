# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
vector<vector<int> > d, dp;
vector<int> val, st, en, vis, id, spf, powers;
int n, block, t, logN;
ll value;
ll mod = (1e9)+7;
struct query{
    int l, r, idx, lca;
    bool operator<(const query& other) const{
        return make_pair(l/block, r) < make_pair(other.l/block, other.r);
    }
};
void sieve(){
    spf.resize(1e6+1);
    for(int i = 0; i <= 1e6; i++) spf[i] = i;
    for(int i = 2; i*i <= 1e6; i++){
        if (spf[i] == i){
            for(int j = i*i; j <= 1e6; j+=i){
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}
vector<pair<int, int> > getFactorization(int n){
    vector<pair<int, int> > res;    
    while(n!=1){
        int p = spf[n];
        int ct = 0;
        while(n%p == 0){
            n/=p;
            ct++;
        }
        res.push_back(make_pair(p, ct));
    }
    return res;
}
void clear(){
    d.assign(n, vector<int>());
    id.assign(n, -1);
    val.assign(n, 0);
    st.assign(n, 0);
    en.assign(n, 0);
    vis.assign(n, 0);
    t = 0;
    logN = ceil(log2(n));
    block = floor(sqrt(n));
    dp.assign(n, vector<int>(logN+1));
}
void dfs(int v, int p){
    st[v] = t++;
    id.push_back(v);
    vis[v] = 1;
    dp[v][0] = p;
    for(ll i = 1; i <= logN; i++) dp[v][i] = dp[dp[v][i-1]][i-1];
    for(auto i:d[v]){
        if(!vis[i]) dfs(i, v);
    }
    id.push_back(v);
    en[v] = t++;
}
bool isAncestor(ll u, ll v){
    return (st[u] <= st[v] and en[u] >= en[v]);
}
int lca(int u, int v){
    if (isAncestor(u, v)) return u;
    if (isAncestor(v, u)) return v;
    for(int i = logN; i >= 0; i--){
        if (!isAncestor(dp[u][i], v)){
            u = dp[u][i];
        }
    }
    return dp[u][0];
}
void remove(int pos){
    int posval = val[id[pos]];
    vector<pair<int, int> > pf = getFactorization(posval);
}
void solve(){
    cin >> n;
    clear();
    for(int i = 0; i < n; i++){
        int u, v; cin >> u >> v;
        d[--u].push_back(--v);
        d[v].push_back(u);
    }
    dfs(0, 0);
    for(int i = 0; i < n; i++) cin >> val[i];
    int q; cin >> q;
    query queries[q];
    for(int i= 0; i < q; i++){
        int u, v; cin >> u >> v;
        --u, --v;
        if (st[u] > st[v]) swap(u, v);
        if (lca(u, v) == u){
            queries[i].l = st[u];
            queries[i].r = st[v];
            queries[i].lca = -1;
        }else{
            queries[i].l = en[u];
            queries[i].r = st[v];
            queries[i].lca = st[lca(u, v)];
        }
        queries[i].idx = i;
    }
    sort(queries, queries+q);
    int l = 0, r = -1;
    vector<ll> ans(q);
    for(int i = 0; i < q; i++){
        while(l > queries[i].l) add(l--);
        while(l < queries[i].l) remove(l++);
        while(r > queries[i].r) remove(r--);
        while(r < queries[i].r) add(r++);
        if (queries[i].lca!=1) add(queries[i].lca);
        ans[queries[i].idx] = res.val;
        if (queries[i].lca!=1) remove(queries[i].lca);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll test; cin >> test;
    sieve();
    while(test--) solve();
    return 0;
}