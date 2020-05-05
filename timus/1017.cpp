# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
vector<vector<ll> > dp;
ll calc(ll n, ll col){
    if (col == 1) return 1;
    if (n < (col*(col+1))/2) return 0;
    if (dp[n][col]!=-1) return dp[n][col];
    return dp[n][col] = calc(n-col, col-1)+calc(n-col, col);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    ll maxcol = (sqrt(1+8*n)-1)/2;
    dp.resize(n+1, vector<ll>(maxcol+1, -1));
    ll ans = 0;
    for(ll i = 2; i <= maxcol; i++){
        ans+=calc(n, i);
    }
    cout << ans << endl;
    return 0;
}