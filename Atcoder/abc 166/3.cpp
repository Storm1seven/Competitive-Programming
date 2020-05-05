# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, m; cin >> n >> m;
    vector<ll> h(n);
    for(ll i = 0; i < n; i++) cin >> h[i];
    vector<set<ll> > d(n);
    for(ll i = 0; i < m; i++){
        ll u, v; cin >> u >> v;
        u--, v--;
        d[u].insert(h[v]);
        d[v].insert(h[u]);
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if (d[i].size() == 0){
            ans++;
            continue;
        }
        auto ptr = d[i].end();
        ptr--;
        if (*ptr < h[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}