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
        ll x, y, a, b; cin >> x >> y >> a >> b;
        ll hi = max(x, y);
        ll lo = min(x, y);
        ll ans = min((hi-lo)*a+lo*b, (hi+lo)*a);
        cout << ans << endl;
    }
    return 0;
}
