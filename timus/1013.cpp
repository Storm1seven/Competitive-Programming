# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n, k; cin >> n >> k;
    vector<pair<ll, ll> > a;
    for (ll i = 0; i < n; i++){
        ll x; cin >> x;
        a.push_back(make_pair(x, i%k));
    }
    sort(a.begin(), a.end());
    for(ll i = 0; i < n; i++){
        if (i%k != a[i].second){
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}