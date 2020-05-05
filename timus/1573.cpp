# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll b, r, y; cin >> b >> r >> y;
    ll ans = 1;
    ll k; cin >> k;
    for(ll i = 0; i < k; i++){
        string color; cin >> color;
        if (color == "Red") ans*=r;
        else if (color == "Yellow") ans*=y;
        else if (color == "Blue") ans*=b;
    }
    cout << ans << endl;
    return 0;
}