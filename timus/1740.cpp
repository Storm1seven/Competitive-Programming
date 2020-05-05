# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll l, k, h; cin >> l >> k >> h;
    double mint = h*floor(l*1.0/k);
    double maxt = h*ceil(l*1.0/k);
    cout << fixed << setprecision(5) << mint << " " << maxt << endl;
    return 0;
}