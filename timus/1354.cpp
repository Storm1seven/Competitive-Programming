# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s; cin >> s;
    if (s.size() == 1){
        cout << s << s << endl;
        return 0;
    }
    string a = s;
    reverse(a.begin(), a.end());
    string x = a+'#'+s;
    vector<ll> pi(x.size(), 0);
    ll len = 0;
    for(ll i = 1; i < x.size(); i++){
        while (len > 0 and x[len]!=x[i]){
            len = pi[len-1];
        }
        if (x[len] == x[i]) len++;
        pi[i] = len;
    }
    if (len == s.size()) len = pi[len-1];
    string ans1 = s.substr(0, s.size()-len);
    string ans2 = ans1;
    reverse(ans2.begin(), ans2.end());
    cout << ans1 << " " << x.substr(0, len) << " " << ans2 << endl;
    return 0;
}