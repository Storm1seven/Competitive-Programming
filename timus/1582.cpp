# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    double x, y, z;
    cin >> x >> y >> z;
    double ans = x*y*z/(x*y+y*z+z*x);
    ans*=1000;
    cout << fixed << fixed << setprecision(0) << ans << endl;
    return 0;
}