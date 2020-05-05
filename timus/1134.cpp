# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, m; cin >> n >> m;
    vector<ll> a(m);
    for(ll i = 0; i < m; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<ll> count(n+1, 2);
    count[0] = 1;
    count[n] = 1;
    for(auto i:a){
        if (i == 0){
            count[i]--;
            count[i+1]--;
        }else if (i == n){
            count[i]--;
            count[i-1]--;
        }else{
            count[i]--;
            if (count[i-1] > 0) count[i-1]--;
            else count[i+1]--;
        }
    }
    ll flag = 1;
    for(auto i:count){
        if (i < 0) flag = 0;
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}