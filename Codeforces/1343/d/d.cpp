# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> z(2*k+2, 0);
    map<ll, ll> m;
    for(ll i = 0; i < n/2; i++){
        m[a[i]+a[n-1-i]]++;
        ll lower = a[i]+a[n-1-i]-max(a[i], a[n-1-i])+1;
        ll upper = a[i]+a[n-1-i]+max(k-a[i], k-a[n-1-i]);
        z[lower]+=1;
        z[upper+1]-=1;
    }
    for(ll i = 1; i < z.size(); i++){
        z[i]+=z[i-1];
    }
    ll ans = LLONG_MAX;
    for(ll i = 2; i < z.size(); i++){
        ans = min(ans, z[i]+(n/2-z[i])*2-m[i]);
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
