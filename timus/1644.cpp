# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    map<ll, set<string> > m;
    m[2].insert("hungry");
    m[10].insert("satisfied");
    for(ll i =0; i < n; i++){
        ll val;
        string res;
        cin >> val >> res;
        m[val].insert(res);
    }
    ll lows = -1, highs = -1;
    for(auto i:m){
        if (i.second.size() > 1){
            cout << "Inconsistent";
            return 0;
        }
        if (*i.second.begin() == "satisfied" and lows == -1) lows = i.first;
        if (*i.second.begin() == "hungry") highs = i.first;
    }
    if (lows > highs) cout << lows;
    else cout << "Inconsistent";
    return 0;
}