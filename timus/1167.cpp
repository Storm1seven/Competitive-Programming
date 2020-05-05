# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll dp[503][503];
ll black[503] = {0}, white[503] = {0};
ll calc(ll n, ll k){
    if (k == 1) return dp[n][k] = white[n]*black[n];
    if (dp[n][k] != -1) return dp[n][k];
    if (n == k) return dp[n][k] = 0;
    ll minval = LLONG_MAX;
    for(ll i = 1; n-i >= k-1; i++){
        ll val = (black[n]-black[n-i])*(white[n]-white[n-i])+calc(n-i, k-1);
        minval = min(minval, val);
    }
    return dp[n][k] = minval;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, k; cin >> n >> k;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        black[i+1] = black[i];
        white[i+1] = white[i];
        if (x==1) black[i+1]++;
        else white[i+1]++;
    }
    memset(dp, -1, sizeof(dp));
    cout << calc(n, k) << endl;
    return 0;
}