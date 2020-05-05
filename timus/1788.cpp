# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, m; cin  >> n >> m;
    vector<ll> a(n), b(m);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    vector<ll> pa(n+1, 0), pb(m+1, 0);
    for(ll i = 1; i <= n; i++){
        pa[i] = pa[i-1]+a[i-1];
    }
    for(ll i = 1; i <= m; i++){
        pb[i] = pb[i-1]+b[i-1];
    }
    ll lim = min(n, m);
    ll ans = LLONG_MAX;
    for(ll i = 0; i <= lim; i++){
        ans = min(ans, i*(pb.back()-pb[i])+pa.back()-pa[i]);
    }
    cout << ans << endl;
    return 0;
}