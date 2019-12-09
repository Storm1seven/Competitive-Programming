/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    ll n; cin>>n;
    string s; cin>>s;
    if (count(s.begin(), s.end(), 'A') > count(s.begin(), s.end(), 'D')) cout<<"Anton\n";
    else if (count(s.begin(), s.end(), 'A') < count(s.begin(), s.end(), 'D')) cout<<"Danik\n"; 
    else cout<<"Friendship\n";
    return 0;
}