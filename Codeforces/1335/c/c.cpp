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
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        set<ll> s;
        map<ll, ll> m;
        for(auto i:a){
            s.insert(i);
            m[i]++;
        }
        ll ans = 0;
        ll x = s.size();
        for(auto i:s){
            ans = max(ans, min(m[i], x-1));
            ans = max(ans, min(m[i]-1, x));
        }
        cout << ans << endl;
    }
    return 0;
}
