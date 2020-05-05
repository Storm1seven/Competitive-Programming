# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s; cin >> s;
    ll n = s.size();
    vector<ll> vis(1e6);
    for(ll len = 1; len <= 6; len++){
        for(ll i = 0; i+len-1 < n; i++){
            ll num = 0;
            for(ll j = i; j < i+len; j++){
                num*=10;
                num+=s[j]-'0';
            }
            if (num < 1e6) vis[num] = 1;
        }
    }
    for(ll i = 1; i < vis.size(); i++){
        if (!vis[i]){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}