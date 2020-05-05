# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, k; cin >> n >> k;
    if (n == 2) return cout << 0, 0;
    if (k > n/2) k = n-k+1;
    cout << n-k-2;
    return 0;
}