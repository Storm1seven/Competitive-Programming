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
        ll n; cin >> n;
        vector< pair<ll, ll> > a(n+1);
        a.push_back(make_pair(0, 0));
        for(ll i = 1; i <= n; i++) cin >> a[i].first >> a[i].second;
        ll flag = 0;
        for(ll i = 1; i <= n; i++){
            ll p = a[i].first - a[i-1].first;
            ll q = a[i].second - a[i-1].second;
            if (p >= 0 and q >= 0 and q <= p){
                continue;
            }else{
                flag = 1;
            }
        }
        if (flag) cout << "NO" <<'\n';
        else cout << "YES" << '\n';
    }
    return 0;
}
