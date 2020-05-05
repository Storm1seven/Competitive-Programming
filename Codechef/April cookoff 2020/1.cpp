# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    string s, t; cin >> s >> t;
    ll n = s.size();
    vector<ll> a;
    for(ll i = 0; i < n; i++){
        if (s[i] == t[i]) a.push_back(-1);
        else a.push_back(1);
    }
    vector<ll> x;
    for(auto i:a){
        if (!x.size()){
            x.push_back(i);
            continue;
        }
        if (x.back()/i > 0) x.back()+=i;
        else x.push_back(i);
    }
    ll k = 0, l = 0;
    for(auto i:x){
        if (i > 0){
            k++;
            l+=i;
        }
    }
    if (k*l == 0){
        cout << 0 << '\n';
        return;
    }
    // cout << x << endl;
    // cout << k << " " << l << endl;
    if (x[0] < 0) x.erase(x.begin());
    if (x.back() < 0) x.pop_back();
    vector<ll> val;
    for(auto i:x){
        if (i < 0) val.push_back(-i);
    }
    sort(val.begin(), val.end());
    // cout << val << endl;
    ll ans = k*l;
    for(auto i:val){
        k-=1;
        l+=i;
        ans = min(ans, k*l);
    }
    // cout << k << " " << l << endl;
    cout << ans << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}