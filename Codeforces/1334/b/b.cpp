# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, x; cin >> n >> x;
        vector<ll> a(n);
        for(ll i =0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll sum = 0;
        ll ans = 0;
        for(ll i = n-1; i >= 0; i--){
            sum+=a[i];
            if (sum/(n-i) >= x){
                ans = n-i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
