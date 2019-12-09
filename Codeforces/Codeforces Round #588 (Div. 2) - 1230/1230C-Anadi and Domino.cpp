/*input
7 5
5 6
3 7
7 2
4 2
1 4
*/
# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
using namespace std;
# define ll long long
// # define ll int
# define vll vector<ll>
# define vvll vector<vector<ll> >
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll> >
# define mll map<ll, ll>
# define sll set<ll>
# define usll unordered_set<ll>
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
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
ll d[10][10];
ll n, m, u, v;
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 cin>>n>>m;
 loop(i, 0, m, 1){
  cin>>u>>v;
  d[u][v] = d[v][u] = 1;
 }
 if (n < 7){
  cout<<m<<endl;
  return 0;
 }
 ll ma = 1e9;
 loop(i, 1, 8, 1){
  loop(j, 1, 8, 1){
   ll x = 0;
   loop(k, 1, 8, 1){
    if (d[i][k] and d[k][j]) x++;
   }
   ma = min(ma, x);
  }
 }
 cout<<m-ma<<endl;
 return 0;
}