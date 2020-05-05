# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, m; cin >> n >> m;
    vector<vector<ll> > d(n);
    for(ll i = 0; i < m; i++){
        ll u, v; cin >> u >> v;
        d[--u].push_back(--v);
    }
    vector<ll> order(n), pos(n);
    for(ll i = 0; i < n; i++){
        cin >> order[i];
        order[i]--;
        pos[order[i]] = i;
    }
    for(ll i = 0; i < n; i++){
        for (auto j:d[order[i]]){
            if (pos[j] < i){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}