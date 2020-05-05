# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector< vector<string> > a(n, vector<string>(3));
    for (ll i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        sort(a[i].begin(), a[i].end());
    }
    vector<ll> order(n);
    for (ll i = 0; i < n; i++){
        cin >> order[i];
        order[i]--;
    }
    vector<string> ans;
    for(ll i = 0; i < n; i++){
        if (i == 0){
            ans.push_back(a[order[i]][0]);
            continue;
        }
        for (ll j = 0; j < 3; j++){
            if (a[order[i]][j] > ans.back()){
                ans.push_back(a[order[i]][j]);
                break;
            }
        }
    }
    if (ans.size() == n){
        for(auto i:ans) cout << i << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}