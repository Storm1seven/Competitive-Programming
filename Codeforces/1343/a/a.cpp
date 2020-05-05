# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n; cin >> n;
    for(ll k = 2; k < 32; k++){
        ll val = pow(2, k)-1;
        if (n%val == 0){
            cout << n/val << endl;
            return;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
