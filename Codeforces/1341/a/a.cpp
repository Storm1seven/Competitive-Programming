# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n, a, b, c, d; cin >> n >> a >> b >> c >> d;
    for(ll w = c-d; w <= c+d; w++){
        double val = (w*1.0)/n;
        if (val >= a-b and val <= a+b){
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
