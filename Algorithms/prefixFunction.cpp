# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
# include<prettyprint.hpp>
using namespace std;
# define ll long long
vector<int> prefixFunction(string s){
    int n = s.size(), l;
    vector<int> pi(n);
    pi[0] = 0;
    for (int i = 1; i < n; i++){
        l = pi[i-1];
        while (l > 0 and s[i]!=s[l]){
            l = pi[l-1];
        }
        if (s[i] == s[l]) ++l;
        pi[i] = l;
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s; cin >> s;
    vector<int> pi = prefixFunction(s);
    return 0;
}