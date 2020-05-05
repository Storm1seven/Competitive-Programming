# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    if (n == 0){
        cout << 10 << endl;
        return 0;
    }
    if (n < 10){
        cout << n << endl;
        return 0;
    }
    vector<ll> ans;
    for(ll i = 9; i >= 2; i--){
        while (n%i == 0){
            n/=i;
            ans.push_back(i);
        }
    }
    if (n > 1){
        cout << -1 << endl;
        return 0;
    }
    while (ans.size()){
        cout << ans.back();
        ans.pop_back();
    }
    return 0;
}