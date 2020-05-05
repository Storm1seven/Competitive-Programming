# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<ll> dp(n+1);
    dp[0] = 0;
    for (ll i = 1; i <= n; i++){
        dp[i] = i;
        for (ll j = 1; j*j <= i; j++){
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }
    cout << dp[n] << endl;
    return 0;
}