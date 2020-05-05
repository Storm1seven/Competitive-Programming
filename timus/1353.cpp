# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll dp[82][10];
ll calc(ll sum, ll digit){
    if (sum < 0) return 0;
    if (digit == 0){
        if (sum == 0) return 1;
        else return 0;
    }
    if (dp[sum][digit] != -1) return dp[sum][digit];
    ll res = 0;
    for(ll i = 0; i <= 9; i++){
        res+=calc(sum-i, digit-1);
    }
    return dp[sum][digit] = res;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll s; cin >> s;
    memset(dp, -1, sizeof(dp));
    if (s == 1) cout << 10 << '\n';
    else cout << calc(s, 9) << endl;
    return 0;
}