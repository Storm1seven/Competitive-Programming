# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s, n; cin >> s >> n;
    ll i = 0, j = 0;
    ll time = 0;
    while (1){
        if (s[i] == 'L'){
            if (n[j] == 'F' || n[j] == 'R'){
                j++;
            }else{
                i++;
                j++;
            }
        }
        else if (n[j] == 'L'){
            if (s[i] == 'F' || s[i] == 'R'){
                i++;
            }else{
                i++;
                j++;
            }
        }else{
            i++;
            j++;
        }
        time++;
        if (i == s.size() || j == n.size()) break;
    }
    time+=(s.size()-i+n.size()-j);
    cout << time << endl;
    return 0;
}