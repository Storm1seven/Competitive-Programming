# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll sameCase(char a, char b){
    ll aval = a-'Z'-1;
    ll bval = b-='Z'-1;
    if (aval*bval > 0) return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s; cin >> s;
    string name = "Sandro";
    ll mincost = 60;
    for(int i = 0; i+5 < s.size(); i++){
        ll cost = 0;
        for(int j = 0; j < 6; j++){
            if (name[j] != s[i+j]){
                if (!sameCase(name[j], s[i+j])){
                    cost+=5;
                }
                if (tolower(name[j]) != tolower(s[i+j])){
                    cost+=5;
                }
            }
        }
        mincost = min(cost, mincost);
    }
    cout << mincost;
    return 0;
}