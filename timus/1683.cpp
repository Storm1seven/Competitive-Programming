# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<ll> ans;
    while(n!=1){
        ans.push_back(n/2);
        n-=ans.back();
    }
    cout << ans.size() << endl;
    for(auto i:ans) cout << i << " ";
    return 0;
}