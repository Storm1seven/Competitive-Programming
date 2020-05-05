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
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll maxnum = a[0];
        ll ans = 0;
        for(ll i = 1; i < n; i++){
            maxnum = max(maxnum, a[i]);
            ll val = maxnum-a[i];
            ll count = 0;
            while(val > 0){
                val>>=1;
                count++;
            }
            ans = max(count, ans);
        }
        cout << ans << '\n';
    }
    return 0;
}
