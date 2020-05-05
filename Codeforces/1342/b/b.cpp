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
        string s; cin >> s;
        set<char> st;
        for(auto i:s) st.insert(i);
        if (st.size() == 1) cout << s << endl;
        else{
            for(auto i:s){
                cout << 1 << 0;
            }
            cout << endl;
        }
    }
    return 0;
}
