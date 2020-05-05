# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, m, comp;
vector<ll> parent;
vector<ll> weight;
ll find(ll u){
    ll x = u;
    while(parent[x]!=x) x = parent[x];
    while(parent[u]!=x){
        ll t = parent[u];
        parent[u] = x;
        u = t;
    }
    return x;
}
void join(ll u, ll v){
    ll a = find(u);
    ll b = find(v);
    if (a == b) return;
    if (weight[a] < weight[b]) swap(a, b);
    parent[b] = a;
    weight[a]+=weight[b];
    comp--;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    comp = n;
    vector<pair<ll, ll> > edge(m);
    parent.resize(n);
    weight.resize(n);
    for(ll i = 0; i < n; i++){
        parent[i] = i;
        weight[i] = 1;
    }
    for(ll i = 0; i < m; i++){
        cin >> edge[i].first >> edge[i].second;
        edge[i].first--;
        edge[i].second--;
    }
    ll q; cin >> q;
    vector<ll> query(q), cut(m);
    for(ll i = 0; i < q; i++){
        cin >> query[i];
        query[i]--;
        cut[query[i]] = 1;
    }
    for(ll i = 0; i < m; i++){
        if (!cut[i]) join(edge[i].first, edge[i].second);
    }
    reverse(query.begin(), query.end());
    vector<ll> ans;
    for(auto i:query){
        ans.push_back(comp);
        join(edge[i].first, edge[i].second);
    }
    reverse(ans.begin(), ans.end());
    for(auto i:ans) cout << i << " ";
    return 0;
}