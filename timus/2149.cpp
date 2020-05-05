# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> dir;
    for(ll i = 0; i < 5*n-1; i++){
        if (s[i] == '>') dir.push_back(1);
        else if (s[i] == '<') dir.push_back(0);
    }
    vector<ll> ans1(n), ans2(n), ans3(n), ans4(n);
    for(ll i = 0; i < n; i++){
        if (i < n/2){
            ans1[i] = 1;
            ans2[i] = 0;
        }else{
            ans1[i] = 0;
            ans2[i] = 1;
        }
        if (i%2){
            ans3[i] = 1;
            ans4[i] = 0;
        }else{
            ans3[i] = 0;
            ans4[i] = 1;
        }
    }
    ll val1 = 0, val2 = 0, val3 = 0, val4 = 0;
    for(ll i = 0; i < n; i++){
        if (ans1[i]!=dir[i]) val1++;
        if (ans2[i]!=dir[i]) val2++;
        if (ans3[i]!=dir[i]) val3++;
        if (ans4[i]!=dir[i]) val4++;
    }
    ll ans = min(val1, val2);
    ans = min(ans, val3);
    ans = min(ans, val4);
    cout << ans << endl;
    return 0;
}