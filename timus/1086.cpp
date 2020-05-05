# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
const ll mxN = 2e5;
int prime[mxN+1];
vector<ll> primes;
void sieve(){
    memset(prime, 1, sizeof(prime));
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i*i <= mxN; ++i){
        if (prime[i]){
            for(int j = i*i; j <= mxN; j+=i){
                prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= mxN; i++){
        if (prime[i]) primes.push_back(i);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sieve();
    ll k; cin >> k;
    for(ll i = 0; i < k; i++){
        ll n; cin >> n;
        cout << primes[n-1] << '\n';
    }
    return 0;
}