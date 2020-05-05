# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
long double dist(ll x, ll y){
    long double res = sqrt(pow(x, 2)+pow(y, 2));
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    long double ans = 0;
    for(ll i = 0; i < n; i++){
        ll x, y; cin >> x >> y;
        ans = max(ans, dist(x, y));
    }
    cout << 0 << ' ' << 0 << ' ' << fixed << setprecision(9) << ans << endl;
    return 0;
}