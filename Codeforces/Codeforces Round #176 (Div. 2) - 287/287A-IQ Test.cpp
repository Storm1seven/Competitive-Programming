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
# define printlist(a) {for(auto i : a){cout<<i<<' ';} cout<<'\n';}
int main(){
    ios_base::sync_with_stdio(false);
    vstr a(4);
    loop(i, 0, 4, 1) cin>>a[i];
    loop(i, 1, 4, 1) loop(j, 1, 4, 1){
  ll k=(a[i-1][j-1]=='.')+(a[i][j-1]=='.')+(a[i-1][j]=='.')+(a[i][j]=='.');
  if(k!=2){
            cout<<"YES\n";
            return 0;
        }
 }
    cout<<"NO\n";
    return 0;
}