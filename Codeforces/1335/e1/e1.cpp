# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n);
        vector<vector<int> > ind(201, vector<int>());
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            ind[a[i]].push_back(i);
        }
        // cout << ind << endl;
        ll ans = 0;
        for(ll i = 1; i < 201; i++){
            if (!ind[i].size()) continue;
            for(ll l = 0, r = ind[i].size()-1; l <= r; l++, r--){
                if (l == r){
                    ans = max(ans, (ll)1);
                    continue;
                }
                for(ll j = 1; j < 201; j++){
                    ll st = upper_bound(ind[j].begin(), ind[j].end(), ind[i][l])-ind[j].begin();
                    ll en = lower_bound(ind[j].begin(), ind[j].end(), ind[i][r])-ind[j].begin();
                    // cout << i << ' ' << j << ' ' << st << ' ' << en << ' ' << l << ' ' << r << endl;
                    ll val = en-st+l+1+l+1;
                    ans = max(ans, val);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
