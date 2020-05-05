# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n;
    vector<ll> a(1e5);
    a[0] = 0;
    a[1] = 1;
    for(ll i = 2; i < 1e5; i++){
        if (i%2 == 0){
            a[i] = a[i/2];
        }else{
            a[i] = a[i/2]+a[i/2+1];
        }
    }
    vector<ll> z(1e5);
    z[0] = 0;
    for(ll i = 1; i < 1e5; i++){
        z[i] = max(z[i-1], a[i]);
    }
    while(1){
        cin >> n;
        if (n==0) return 0;
        cout << z[n] << '\n';
    }
    return 0;
}