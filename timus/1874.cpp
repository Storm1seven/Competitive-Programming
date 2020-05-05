# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll a, b; cin >> a >> b;
    double ans  = (a*a*1.0+b*b*1.0)/4 + (a*b*1.0)/sqrt(2);
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}