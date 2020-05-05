# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<char> a;
    char c;
    while(a.size() < n){
        cin >> c;
        if (c == '<' or c == '>') a.push_back(c);
    }
    ll ans = 0;
    ll count = 0;
    for(auto i:a){
        if (i == '>') count++;
        else ans+=count;
    }
    cout << ans << endl;
    return 0;
}