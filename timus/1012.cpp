# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, k; cin >> n >> k;
    ll dp[n+1][2];
    dp[1][0] = 0;
    dp[1][1] = k-1;
    for (ll i=2; i<=n; i++){
        dp[i][1] = (k-1)*(dp[i-1][1]+dp[i-1][0]);
        dp[i][0] = dp[i-1][1];
    }
    cout << dp[n][0]+dp[n][1] << endl;
    return 0;
}