# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll m, d1, d2; cin >> m >> d1 >> d2;
    ll total = (m*d1)/d2;
    ll rem = (m*d1)%d2;
    vector<ll> ans(d2, total);
    for(ll i = 0; i < rem; i++) ans[i]++;
    for(auto i:ans) cout << i << " ";
    cout << endl;
    return 0;
}