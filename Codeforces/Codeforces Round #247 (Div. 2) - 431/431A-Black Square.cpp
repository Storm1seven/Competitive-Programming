/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define pop pop_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    int a[4];
    loop(i, 0, 4, 1) cin>>a[i];
    string s; cin>>s;
    ll ans = 0;
    for(auto i:s) ans+=a[i-'1'];
    cout<<ans<<"\n";
    return 0;
}