# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    cout << 2*n << endl;
    for(ll i = 1; i <= n; i++) cout << i << " ";
    for(ll i = n; i > 0; i--) cout << i << " ";
    return 0;
}