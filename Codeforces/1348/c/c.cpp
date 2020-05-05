# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    sort(s.begin(), s.end());
    vector<string> x(k), y(k);
    for(ll i = 0; i < n; i++){
        if (i >= k) x[0].push_back(s[i]);
        else x[i].push_back(s[i]);
        y[i%k].push_back(s[i]);
    }
    cout << min(*max_element(x.begin(), x.end()), *max_element(y.begin(), y.end())) << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
