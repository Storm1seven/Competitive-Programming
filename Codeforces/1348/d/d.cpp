# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n; cin >> n;
    vector<ll> a;
    for(ll i = 1; i <=n; i*=2){
        a.push_back(i);
        n-=i;
    }
    if (n) a.push_back(n);
    sort(a.begin(), a.end());
    cout << a.size()-1 << '\n';
    for(ll i = 1; i < a.size(); i++) cout << a[i] - a[i-1] << " ";
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
