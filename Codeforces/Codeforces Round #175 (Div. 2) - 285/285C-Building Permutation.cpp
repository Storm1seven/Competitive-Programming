#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    ll n; cin>>n;
    vector<ll> a(n);
    loop(i, 0, n, 1) cin>>a[i];
    sort(a.begin(), a.end());
    ll ans = 0;
    loop(i, 0, n, 1)ans+= abs(a[i] - (i+1));
    cout<<ans<<"\n";
    return 0;
}