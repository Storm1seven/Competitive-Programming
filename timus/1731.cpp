# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < n; i++) cout << (i+1) << " ";
    cout << '\n';
    for(ll i = 0; i < m; i++) cout << 100+i*n << " ";
    cout << '\n';
    return 0;
}