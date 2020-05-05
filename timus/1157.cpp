# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
const ll mxN = 1e4+5;
ll spf[mxN];
void sieve(){
    for(ll i = 1; i < mxN; i++) spf[i] = i;
    for(ll i = 2; i*i <= mxN; i++){
        if (spf[i] != i) continue;
        for(ll j = i*i; j <= mxN; j+=i){
            if (spf[j] == j) spf[j] = i;
        }
    }
}
map<ll, ll> getFactorization(ll n){
    map<ll, ll> res;
    while (n!=1){
        res[spf[n]]++;
        n/=spf[n];
    }
    return res;
}
ll numpairs(ll n){
    map<ll, ll> m = getFactorization(n);
    ll val = 1;
    for(auto i:m) val*=(i.second+1);
    return (val+1)/2;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sieve();
    ll m, n, k; cin >> m >> n >> k;
    for(ll i = 1; i+k <= 10000; i++){
        if (numpairs(i+k) == n and numpairs(i) == m){
            cout << i+k << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}