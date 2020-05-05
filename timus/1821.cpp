# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<tuple<ll, ll, string> > m;
    for(ll i = 0; i < n; i++){
        string s; cin >> s;
        char c;
        ll mm, ss, d; cin >> mm >> c >> ss >> c >> d;
        m.push_back(make_tuple(mm*600+ss*10+d+i*300, mm*600+ss*10+d, s));
    }
    sort(m.begin(), m.end());
    vector<string> ans;
    ll finish, res;
    ll best = 1e18;
    string str;
    for(auto i:m){
        tie(finish, res, str) = i;
        if (res < best) {
            best = res;
            ans.push_back(str);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto i:ans) cout << i << endl;
    return 0;
}