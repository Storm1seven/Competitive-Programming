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
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    ll n, x; cin>>n;
    vll a, b, c;
    loop(i, 0, n, 1){
        cin>>x;
        if (x == 1) a.append(i+1);
        else if (x == 2) b.append(i+1);
        else c.append(i+1);
    }
    ll k = min(min(a.size(), b.size()), c.size());
    cout<<k<<"\n";
    loop(i, 0, k, 1) cout<<a[i]<<' '<<b[i]<<' '<<c[i]<<"\n";
    return 0;
}