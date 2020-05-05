# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
struct city{
    pair<ll, ll> loc;
    ll idx;
    bool operator<(const city& other) const{
        return loc < other.loc;
    }
};
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<city> a(n);
    for (ll i = 0; i < n; i++){
        cin >> a[i].loc.first >> a[i].loc.second;
        a[i].loc.second*=-1;
        a[i].idx = i+1;
    }
    sort(a.begin(), a.end());
    for(ll i = 0; i < n; i+=2){
        cout << a[i].idx << ' ' << a[i+1].idx << '\n';
    }
    return 0;
}