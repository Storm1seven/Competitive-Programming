# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
struct edge{
    ll u, v, w;
    bool operator<(edge const& other) const{
        return w < other.w;
    }
};
ll n, k;
vector<edge> edges;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    ll u, v, w;
    vector<ll> stations(n, 0);
    vector<ll> id(n);
    for(ll i = 0; i < k; i++){
        cin >> u;
        stations[--u] = 1;
    }
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++){
            edge temp;
            temp.u = i, temp.v = j;
            cin >> temp.w;
            if (stations[i] && stations[j]) temp.w = 0;
            edges.push_back(temp);
        }
    }
    sort(edges.begin(), edges.end());
    for(ll i = 0; i < n; i++) id[i] = i;
    ll ans = 0;
    for(auto ed:edges){
        if(id[ed.u] == id[ed.v]) continue;
        ans+=ed.w;
        ll idc = id[ed.v];
        for(ll i = 0; i < n; i++){
            if (id[i] == idc) id[i] = id[ed.u];
        }
    }
    cout << ans << endl;
    return 0;
}