# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll mod = 998244353;
ll powmod(ll x, ll y, ll mod){  
    int res = 1;
    x = x % mod;
    if (x == 0) return 0;
    while (y > 0) {  
        if (y & 1)  
            res = (res*x) % mod;  
        y = y>>1; 
        x = (x*x) % mod;  
    }  
    return res;  
}
ll calc(map<ll, ll> &freq, ll n, ll mex){
    ll ans = 0;
    if (freq.size() == 0) return mex;
    pair<ll, ll> f = *freq.begin();
    freq.erase(f.first);
    ans+=min(mex, f.first)*powmod(2, n-f.second, mod);
    ans%=mod;
    if (f.first == mex) mex++;
    ans+=(powmod(2, f.second, mod)-1)*calc(freq, n-f.second, mex);
    return ans%mod;
}
void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    map<ll, ll> freq;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }
    cout << calc(freq, n, 1) << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}