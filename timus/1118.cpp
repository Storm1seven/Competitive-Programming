# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
const ll MAXN = 1000*1000+5;
int spf[MAXN]; 
void sieve(){ 
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) spf[i] = i; 
    for (int i=4; i<MAXN; i+=2) spf[i] = 2; 
    for (int i=3; i*i<MAXN; i++){ 
        if (spf[i] == i){ 
            for (int j=i*i; j<MAXN; j+=i) if (spf[j]==j) spf[j] = i; 
        } 
    } 
} 
map<ll, ll> getFactorization(ll n){
    map<ll, ll> res;
    while (n > 1){
        res[spf[n]]++;
        if (spf[n] == 0) cout<<n<<endl;
        n/=spf[n];
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sieve();
    ll l, r; cin >> l >> r;
    double minval = 1000000.0;
    ll val = -1;
    for(ll i = l; i <= r; i++){
        double cval = 1;
        if (i == 1) cval = 0;
        else{
            map<ll, ll> fac = getFactorization(i);
            for(auto j:fac){
                cval*=((pow(j.first, j.second+1)-1))/(j.first-1);
            }
            cval-=i;
            cval/=i;
        }
        if (cval < minval){
            val = i;
            minval = cval;
        }
    }
    cout << val <<endl;
    return 0;
}