# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n; cin >> n;
    ll val1 = 0, val2 = 0;
    for(ll i = 1; i <= n; i++){
        if (i < n/2) val1+=(1<<i);
        else if (i < n) val2+=(1<<i);
        else val1+=(1<<i);
    }
    cout << abs(val1-val2) << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
