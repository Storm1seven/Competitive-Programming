# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, k; cin >> n >> k;
    vector<ll> a(k);
    for(ll i = 0; i < k; i++) cin >> a[i];
    ll sum = 0;
    for(ll i = 0; i < k; i++) sum+=a[i];
    cout << max(sum-(k-1)*n, (ll)0) << endl;
    return 0;
}