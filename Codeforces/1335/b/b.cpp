# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, a, b; cin >> n >> a >> b;
        string s = "abcdefghijklmnopqrstuvwxyz";
        string ans;
        for(ll i = 0; i < n; i++){
            ans+=s[i%b];
        }
        cout << ans <<endl;
    }
    return 0;
}
