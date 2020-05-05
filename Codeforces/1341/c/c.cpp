# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll calc(ll l, ll r){
    return ((r)*(r+1))/2 - ((l)*(l+1))/2;
}
void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    set<ll> s;
    ll find = 1;
    while(a.size()){
        s.insert(a.back());
        if (a.back() == find){
            auto ptr = s.end();
            ptr--;
            ll val = *ptr;
            cout << s << endl;
            if (val == s.size()){
                a.pop_back();
                find = val+1;
                continue;
            }
            else{
                cout << "No" << endl;
                return;
            }
        }
        a.pop_back();
    }
    cout << "Yes" << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
