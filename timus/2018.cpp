# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, a, b; cin >> n >> a >> b;
    ll mod = 1000*1000*1000 + 7;
    ll dp[2][n+1];
    for(ll i = 0; i <= n; i++){
        if (i <= 1) dp[0][i] = dp[1][i] = 1;
        if (i > 1 and i <= a){
            dp[0][i] = (dp[0][i-1]+dp[1][i-1])%mod;
        }
        if (i > 1 and i <= b){
            dp[1][i] = (dp[1][i-1]+dp[0][i-1])%mod;
        }
        if ( i > a){
            dp[0][i] = (dp[0][i-1]+dp[1][i-1]-dp[1][i-a-1]+mod)%mod;
        }
        if (i > b){
            dp[1][i] = (dp[0][i-1]+dp[1][i-1]-dp[0][i-b-1]+mod)%mod;
        }
    }
    cout << (dp[0][n]+dp[1][n])%mod;
    return 0;
}