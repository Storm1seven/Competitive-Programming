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
        map<ll, vector<ll> >m;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            m[a[i]].push_back(i);
        }
        ll prev = -1;
        ll count = 0;
        for(auto i:m){
            ll val = lower_bound(i.second.begin(), i.second.end(), prev) - i.second.begin();
            if (val == i.second.size()){
                count++;
                prev = -1;
                val = lower_bound(i.second.begin(), i.second.end(), prev) - i.second.begin();
            }
            prev = i.second[val];
        }
        cout << count+1 << endl;
    }
    return 0;
}