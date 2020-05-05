# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    map<ll, ll> m;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        m[x]++;
    }
    ll ans = 0;
    for(auto i:m){
        ans = max(ans, i.second);
    }
    cout << ans << endl;
    return 0;
}
