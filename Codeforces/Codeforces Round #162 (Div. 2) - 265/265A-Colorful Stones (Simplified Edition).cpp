/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vpll vector<pair<ll, ll>>
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define pop pop_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    string s, t;
    cin>>s>>t;
    ll i = 0, j = 0;
    ll steps = 0;
    while(i < s.size() && j < t.size()){
        if (s[i] == t[j]){
            i++;
            j++;
            steps++;
        }
        else j++;
    }
    cout<<steps+1<<"\n";
    return 0;
}