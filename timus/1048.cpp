# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<int> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i] >> b[i];
    vector<int> ans(n);
    int carry = 0;
    for(ll i = n-1; i >= 0; i--){
        ans[i] = (a[i]+b[i]+carry)%10;
        carry = (a[i]+b[i]+carry)/10;
    }
    if (carry) cout << carry;
    for(auto i:ans) cout << i;
    cout << endl;
    return 0;
}