# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
ll mod = 163577857;
vector<ll> fact(2*(1e5)+1);
ll power(ll x, ll y, ll p) {  
    int res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0){
        if (y & 1) res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;  
    }  
    return res;  
}
ll ncr(ll n, ll r){
    ll val = fact[n];
    val*=power(fact[n-r], mod-2, mod);
    val%=mod;
    val*=power(fact[r], mod-2, mod);
    val%=mod;
    return val;
}
void solve(){
    ll n; cin >> n;
    ll p = 0, q = 0, r = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if (x == 1) p++;
        else if (x == -1) q++;
        else r++;
    }
    vector<ll> ans(2*n+1, 0);
    ll count = 0;
    for(ll i = -q; i <= p; i++){
        ans[i+n] = ncr(p+q, count)*power(2, r, mod);
        ans[i+n]%=mod;
        count++;
    }
    ans[n]-=1;
    for(auto i:ans) cout << i << " ";
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >>t;
    fact[0] = 1;
    for(ll i = 1; i < fact.size(); i++){
        fact[i] = i*fact[i-1];
        fact[i]%=mod;
    }
    while(t--) solve();
    return 0;
}