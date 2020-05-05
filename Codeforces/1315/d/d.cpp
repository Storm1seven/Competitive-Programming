# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<pair<ll, ll> > a(n);
    for(ll i = 0; i < n; i++) cin >> a[i].first;
    for(ll i = 0; i < n; i++) cin >> a[i].second;
    sort(a.begin(), a.end());
    multiset<ll, greater<ll> > m;
    ll total = 0, ans = 0;
    ll val = a[0].first;
    ll i = 0;
    while (i < n){
        if (a[i].first == val){
            m.insert(a[i].second);
            total+=a[i].second;
            i++;
        }else{
            if (m.size() > 1){
                ans+=total-*m.begin();
                total-=*m.begin();
                m.erase(m.begin());
                val++;
            }else{
                m.clear();
                total = 0;
                val = a[i].first;
            }
        }
    }
    while (m.size() > 1){
        ans+=total-*m.begin();
        total-=*m.begin();
        m.erase(m.begin());
    }
    cout << ans << endl;
    return 0;
}