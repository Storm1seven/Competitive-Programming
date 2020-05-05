# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll dp[10000][100];
map<ll, vector<ll> > m;
ll mod = 1e9 + 9;
bool isPrime(ll n){
    for(ll i = 2; i*i <= n; i++){
        if (n%i == 0) return false;
    }
    return true;
}
ll calc(ll n, ll end){
    if (n == 0) return 1;
    if (end < 10) return 0;
    if (dp[n][end] != -1) return dp[n][end];
    dp[n][end] = 0;
    for(ll i = 0; i < m[end].size(); i++){
        dp[n][end]+=calc(n-1, (end*10+m[end][i])%100);
        dp[n][end]%=mod;
    }
    return dp[n][end];
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    memset(dp, -1, sizeof(dp));
    for(ll i = 10; i < 100; i++){
        for (ll j = 0; j < 10; j++){
            if (isPrime(i*10+j)){
                m[i].push_back(j);
            }
        }
    }
    ll ans = 0;
    for(ll i = 10; i < 100; i++){
        ans+=calc(n-2, i);
        ans%=mod; 
    }
    cout << ans << endl;
    return 0;
}