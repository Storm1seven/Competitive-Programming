# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<vector<ll> > d;
    d.push_back(vector<ll>(1, 0));
    for(ll i = 1; i <= n; i++){
        ll k; cin >> k;
        d.push_back(vector<ll>(k, 1e9));
        for (ll j = 0; j < k; j++){
            while(1){
                ll u, v;
                cin >> u;
                if (!u) break;
                cin >> v;
                d[i][j] = min(d[i-1][u-1]+v, d[i][j]);
            }
        }
        if (i < n){
            char c;
            cin >> c;
        }
    }
    cout << *min_element(d.back().begin(), d.back().end()) << endl;
    return 0;
}