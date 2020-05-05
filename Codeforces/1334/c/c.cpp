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
        vector< pair<ll, ll> > a(n);
        for(ll i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
        vector<ll> c(n);
        ll tot = 0;
        ll ans = 0;
        for(ll i = 0; i < n; i++){
            c[(i+1)%n] = max(a[(i+1)%n].first-a[i].second, (ll) 0);
            tot+=c[(i+1)%n];
            ans+=a[i].first;
        }
        for(ll i = 0; i < n; i++){
            ans = min(ans, tot-c[i]+a[i].first);
        }
        cout << ans << '\n';
    }
    return 0;
}
