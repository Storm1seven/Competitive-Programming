/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll>>
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll>>
# define sll set<ll>
# define schar set<char>
# define pll pair<ll, ll>
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define popb pop_back
# define add insert
# define all(v) v.begin(), v.end()
# define rall(v) v.rbegin(), v.rend()
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i;} cout<<'\n';}
int main(){
    ios_base::sync_with_stdio(false);
    string s; cin>>s;
    vchar x;
    for(auto i:s) x.append(i);
    loop(i, x[0] == '9', x.size(), 1){
        if (x[i] > '4') x[i] = '0' + '9' - x[i];
    }
    stringstream temp(s);
    ll num;
    temp>>num;
    string k;
    for (auto i:x) k+=i;
    stringstream temp1(k);
    ll n;
    temp1>>n;
    if (n == 0) cout<<num;
    else cout<<n;
    return 0;
}