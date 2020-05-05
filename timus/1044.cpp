# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll calc(ll n){
    ll res = 0;
    while (n){
        res+=n%10;
        n/=10;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    map<ll, ll> m;
    for(int i = 0; i < pow(10, n/2); i++){
        m[calc(i)]++;
    }
    ll ans = 0;
    for(auto i:m){
        ans+=i.second*i.second;
    }
    cout << ans << endl;
    return 0;
}