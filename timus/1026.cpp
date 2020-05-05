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
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    string s; cin >> s;
    ll k; cin >> k;
    for(ll i = 0; i < k; i++){
        ll pos; cin >> pos;
        cout << a[pos-1] << endl;
    }
    return 0;
}