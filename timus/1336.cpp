# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    map<ll, ll> pf;
    while(n%2 == 0){
        pf[2]++;
        n/=2;
    }
    for(ll i = 3; i*i <= n; i+=2){
        while(n%i == 0){
            n/=i;
            pf[i]++;
        }
    }
    if (n > 1) pf[n]++;
    ll k = 1;
    for(auto i:pf){
        if (i.second%2){
            k*=i.first;
            pf[i.first]+=3;
        }
    }
    ll m = 1;
    for(auto i:pf){
        m*=pow(i.first, i.second/2);
    }
    cout << m << endl;
    cout << k << endl;
    return 0;
}