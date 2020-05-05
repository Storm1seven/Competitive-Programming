# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
vector<int> prefixFunction(string s){
    int n = s.size(), l;
    vector<int> pi(n);
    for (int i = 1; i < n; i++){
        l = pi[i-1];
        while(l > 0 and s[i]!=s[l]) l = pi[l-1];
        if (s[i] == s[l]) ++l;
        pi[i] = l;
    }
}
vector<int> kmp(string t, string s){
    string z = t+'#'+s;
    vector<int> pi = prefixFunction(z);
    vector<int> match;
    for(int i = t.size()+1; i < z.size(); i++){
        if (pi[i] == t.size()) match.push_back(i-t.size()-1);
    }
    return match;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    return 0;
}