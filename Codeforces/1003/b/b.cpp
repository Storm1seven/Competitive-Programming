# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll a, b, x; cin >> a >> b >> x;
    string ans;
    if (a > b) ans = "01";
    else ans = "10";
    a--, b--;
    for(ll i = 1; i < x; i++){
        if (ans[ans.size()-2] == '0') a--;
        else b--;
        ans+=ans[ans.size()-2];
    }
    for (auto i:ans){
        if (i == '0'){
            while(a){
                cout << '0';
                a--;
            }
            cout << i;
        }else{
            while(b){
                cout << '1';
                b--;
            }
            cout << i;
        }
    }
    cout << endl;
    return 0;
}
