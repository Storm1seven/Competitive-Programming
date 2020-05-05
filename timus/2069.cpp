# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    ll ans = max(min(a[0], b[m-1]), min(b[0], a[n-1]));
    for(ll i = 1; i < m-1; i++){
        ans = max(ans, min(min(a[0], b[i]), a[n-1]));
    }
    for(ll i = 1; i < n-1; i++){
        ans = max(ans, min(min(b[0], a[i]), b[m-1]));
    }
    cout << ans << endl;
    return 0;
}