# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int check(string s, string t){
    string z = s+' '+t;
    int n = z.size(), l = 0;
    vector<int> pi(n);
    for(int i = 1; i < n; i++){
        l = pi[i-1];
        while (l > 0 and z[i]!=z[l]) l = pi[l-1];
        if (z[i] == z[l]) l++;
        pi[i] = l;
    }
    for(int i = s.size()+1; i < z.size(); i++){
        if (pi[i] == s.size()) return i-(s.size()+1)-s.size()+1;
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    string s, t; cin >> s >> t;
    t+=t;
    cout << check(s, t) << endl;
    return 0;
}