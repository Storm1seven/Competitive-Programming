# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll x, n, m; cin >> x >> n >> m;
        while(n){
            ll nx = x/2+10;
            if (nx < x){
                x = nx;
                n--;
            }else{
                break;
            }
        }
        if (x > m*10) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
