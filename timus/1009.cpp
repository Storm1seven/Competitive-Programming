# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, k; cin>>n>>k;
    ll zero[n], nZero[n];
    nZero[0] = k-1;
    zero[0] = 0;
    for(ll i = 1; i < n; i++){
        zero[i] = nZero[i-1];
        nZero[i] = (k-1)*(nZero[i-1]+zero[i-1]);
    }
    cout<<nZero[n-1]+zero[n-1]<<endl;
    return 0;
}