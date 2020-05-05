# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int power(ll x, ll y, ll p) {  
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
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    ll mod = 1000000007;
    while(t--){
        ll n, k; cin >> n >> k;
        ll ans = 0;
        if (n==0){
            ans = (k-1)*k;
        }else{
            if (k%2 == 0){
                ll val = n+(k-1)/2;
                ans = power(val, 2, mod)+val+n;
            }else{
                ll val = n+(k-1)/2;
                ans = power(val, 2, mod)+val-n+mod;
            }
        }
        cout << ans%mod << endl;
    }
    return 0;
}