# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n; cin >> n;
    if (n%4){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(ll i = 2; i <= n; i+=2){
        cout << i << " ";
    }
    for(ll i = 1; i < n-1; i+=2){
        cout << i << " ";
    }
    cout << n+(n/2)-1 << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
