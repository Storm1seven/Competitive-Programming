/*input
7 3 4
3 4 6
1 2
2 5
5 7
7 1
*/
# include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll> >
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll> >
# define mll map<ll, ll>
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
vll vin(ll n){vll a(n);loop(i, 0, n, 1) cin>>a[i];return a;}
ll intin() {ll n; cin>>n; return n;}
char charin(){char a; cin>>a; return a;}
string strin(){string s; cin>>s; return s;}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 ll n, m, k, x;
 cin>>n>>m>>k;
 vll a(n+1);
 loop(i, 0, n+1, 1) a[i] = 0;
 loop(i, 0, m, 1){
  cin>>x;
  a[x] = 1;
 }
 ll u, v, current = 1;
 loop(i, 0, k, 1){
  cin>>u>>v;
  if (a[current]){
   cout<<current<<"\n";
   return 0;
  }
  else if (u == current) current = v;
  else if (v == current) current = u;
 }
 cout<<current<<"\n";
 return 0;
}