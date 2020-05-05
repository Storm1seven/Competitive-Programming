# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    long double pi = 3.141592653589793238462;
    long double theta = (2*pi)/n;
    if (n == 1){
        cout << 1<< endl;
    }else{
        long double ans = sqrtl((2*1.0)/(1-cos(theta)));
        cout << fixed << setprecision(6) << ans+1 << endl;
    }
    return 0;
}