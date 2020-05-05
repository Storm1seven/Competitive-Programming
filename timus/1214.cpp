# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll x, y; cin >> x >> y;
    if (x <= 0 || y <= 0) cout << x << ' ' << y;
    else if ((x+y)%2) cout << y << ' ' << x;
    else cout << x << ' ' << y;
    return 0;
}