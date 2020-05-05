# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<ll> a(n);
    map<ll, ll> m;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        m[i-a[i]]++;
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        m[i-a[i]]--;
        ans+=m[a[i]+i];
    }
    cout << ans << endl;
    return 0;
}