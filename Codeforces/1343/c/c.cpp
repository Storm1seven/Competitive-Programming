# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n; cin >> n;
    vector<ll> z;
    ll sz = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if (sz == 0){
            z.push_back(x);
            sz++;
            continue;
        }
        if ((ll)z[sz-1]*x > 0){
            z[sz-1] = max(z[sz-1], x);
        }else{
            z.push_back(x);
            sz++;
        }
    }
    ll ans = 0;
    for(auto i:z) ans+=i;
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
