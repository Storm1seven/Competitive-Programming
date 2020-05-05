# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
vector<ll> dp, a;
ll n, inf = LLONG_MAX;
string bits(ll val){
    string s;
    while(val){
        if (val%2) s+='1';
        else s+='0';
        val/=2;
    }
    while(s.size()!=n) s+='0';
    return s;
}
ll calc(ll k){
    if (k == 0) return 0;
    if (dp[k]!=inf) return dp[k];
    string mask = bits(k);
    ll remval = 0;
    for(ll i = 0; i < n; i++){
        if (mask[i] == '1') remval+=a[i];
    }
    for(ll i = 0; i < n; i++){
        if (mask[i] == '0') continue;
        ll val = remval-a[i];
        ll nextk = k-pow(2, i);
        if (mask[(i-1+n)%n] == '1'){
            val-=a[(i-1+n)%n];
            nextk-=pow(2, (i-1+n)%n);
        }
        if (mask[(i+1)%n] == '1'){
            val-=a[(i+1)%n];
            nextk-=pow(2, (i+1)%n);
        }
        val+=calc(nextk);
        dp[k] = min(dp[k], val);
    }
    return dp[k];
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    dp.resize(pow(2, n), inf);
    a.resize(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    reverse(a.begin(), a.end());
    cout << calc(pow(2, n)-1) << endl;
    return 0;
}