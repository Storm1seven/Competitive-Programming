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
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll mid = n/2;
        vector<ll> ans;
        ans.push_back(a[mid]);
        ll delta = 1;
        ll flag = 0;
        while(1){
            flag = 0;
            if (mid-delta >= 0){
                ans.push_back(a[mid-delta]);
                flag = 1;
            }
            if (mid+delta < n){
                ans.push_back(a[mid+delta]);
                flag = 1;
            }
            delta++;
            if (!flag) break;
        }
        for(auto i:ans) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}
