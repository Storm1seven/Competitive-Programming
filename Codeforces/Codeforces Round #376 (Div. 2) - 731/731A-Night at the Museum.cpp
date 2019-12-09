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
    string s; cin>>s;
    s = 'a'+s;
    ll ans = 0;
    loop(i, 1, s.size(), 1){
        ans+=min(abs(s[i-1]-s[i]), 26 - abs(s[i]-s[i-1]));
    }
    cout<<ans<<"\n";
    return 0;
}