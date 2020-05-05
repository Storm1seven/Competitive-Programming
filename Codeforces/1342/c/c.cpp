# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
bool check(ll x, ll a, ll b){
    if ((x%a)%b != (x%b)%a) return true;
    return false;
}
;ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}
ll calc(ll n, ll a, ll b){
    ll lcm = (a*b)/gcd(a, b);
    ll ans = (n/lcm)*a;
    ans+=min(n%lcm+1, a);
    return n-ans;
}
void solve(){
    ll a, b, q; cin >> a >> b >> q;
    if (a < b) swap(a, b);
    for(ll _ = 0; _ < q; _++){
        ll l, r; cin >> l >> r;
        cout << calc(r, a, b) - calc(l-1, a, b) << " ";
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
