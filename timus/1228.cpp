# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, s; cin >> n >> s;
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    a[0] = s;
    for(ll i = 0; i < n; i++){
        cout << a[i]/a[i+1] - 1 << ' ';
    }
    return 0;
}