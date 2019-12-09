#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    ll n, k, s, d; cin>>n>>k;
    ll ans = INT_MAX, route = 0, c = 0;
    loop(i, 0, n, 1){
        cin>>s>>d;
        if (k > s){
            c = (k-s+d-1)/d;
            if (s + c*d - k < ans){
                ans = min(ans, s+c*d - k);
                route = i+1;
            }
        }
        else{
            if (s-k < ans){
                ans = min(ans, s-k);
                route = i+1;
            }
        }
    }
    cout<<route<<"\n";
    return 0;
}