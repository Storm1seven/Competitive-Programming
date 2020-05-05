# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    set<ll> s;
    vector<ll> nums;
    for(auto i:a) s.insert(i);
    if (s.size() > k){
        cout << -1 << endl;
        return;
    }
    for(auto i:s) nums.push_back(i);
    while(nums.size() < k) nums.push_back(1);
    vector<ll> ans;
    ll i = 0, j = 0;
    while(j < n){
        if (a[j] == nums[i]){
            ans.push_back(a[j]);
            j++;
        }else{
            ans.push_back(nums[i]);
        }
        i++;
        i%=nums.size();
    }
    cout << ans.size() << endl;
    for(auto i:ans) cout << i << " ";
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
