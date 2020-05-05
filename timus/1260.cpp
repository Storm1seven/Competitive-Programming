# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    ll dp[56];
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    for(ll i = 4; i <= 55; i++){
        dp[i] = dp[i-1]+dp[i-3]+1;
    }
    cout << dp[n] << '\n';
    return 0;
}