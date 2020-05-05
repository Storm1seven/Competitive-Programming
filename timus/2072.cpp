# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<ll> a(n);
    map<ll, vector<ll> > m;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]].push_back(i);
    }
    m[0].push_back(0);
    vector<ll> z;
    for(auto i:m) z.push_back(i.first);
    ll len = z.size();
    vector<ll> dpl(len), dpr(len);
    dpr[0] = 0; dpl[0] = 0;
    for(ll i = 1; i < len; i++){
        ll l = m[z[i]][0], r = m[z[i]].back();
        ll pl = m[z[i-1]][0], pr = m[z[i-1]].back();
        ll s = m[z[i]].size();
        dpr[i] = min(dpr[i-1]+abs(l-pr), dpl[i-1]+abs(l-pl))+s+abs(r-l);
        dpl[i] = min(dpr[i-1]+abs(r-pr), dpl[i-1]+abs(r-pl))+s+abs(r-l);
    }
    cout << min(dpr[len-1], dpl[len-1]) << endl;
    return 0;
}