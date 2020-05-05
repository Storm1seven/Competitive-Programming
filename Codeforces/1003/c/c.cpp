# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, k; cin >> n >> k;
    ll a[n], z[n+1];
    for(ll i = 0; i < n; i++) cin >> a[i];

    for(ll i = 1; i <= n; i++) z[i] = z[i-1]+a[i-1];
    
    long double ans = 0;
    for(ll len = k; len <= n; len++){
        for (ll i = 1; i+len-1 <= n; i++){
            long double val = ((z[i+len-1]-z[i-1])*1.0)/len;
            ans = max(ans, val);
        }
    }
    cout << fixed << setprecision(8) << ans << endl;
    return 0;
}
