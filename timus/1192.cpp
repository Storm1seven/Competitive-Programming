# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll v, a; cin >> v >> a;
    double k; cin >> k;
    double pi = 3.1415926535;
    double angle = (pi*a)/180;
    double ans = 1;
    ans*=(v*v)*(sin(2*angle));
    ans/=10;
    ans*=(k/(k-1));
    cout << fixed << setprecision(2) << ans << '\n';
    return 0;
}