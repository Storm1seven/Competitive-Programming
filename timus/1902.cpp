# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, t, s; cin >> n >> t >> s;
    for(ll i = 0; i < n; i++){
        ll a; cin >> a;
        double ans = (t+a-s)*1.0/2;
        ans+=s;
        cout << fixed << setprecision(10) << ans << '\n';
    }
    return 0;
}