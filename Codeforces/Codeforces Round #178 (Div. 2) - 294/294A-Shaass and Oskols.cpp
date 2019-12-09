/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vpll vector<pair<ll, ll>>
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define pop pop_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<'\n';}}((
int main(){
    ios_base::sync_with_stdio(false);
    ll n; cin>>n;
    ll a[n];
    loop(i, 0, n, 1) cin>>a[i];
    ll m; cin>>m;
    ll x, y;
    loop(i, 0, m, 1){
        cin>>x>>y;
        if (x == 1){
            a[1]+=a[0] - y;
            a[0] = 0; 
        }
        else if(x == n){
            a[n-2]+=y-1;
            a[n-1] = 0;
        }
        else{
            a[x]+=a[x-1] - y;
            a[x-2]+=y-1;
            a[x-1] = 0;
        }
    }
    for(auto i:a) cout<<i<<"\n";
    return 0;
}