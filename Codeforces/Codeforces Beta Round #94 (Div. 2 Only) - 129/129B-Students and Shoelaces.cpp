/*input
11 10
1 2
1 3
3 4
1 5
5 6
6 7
1 8
8 9
9 10
10 11
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
 ll n, m, x, y;
 cin>>n>>m;
 ll d[n][n];
 loop(i, 0, n, 1) loop(j, 0, n, 1) d[i][j] = 0;
 vll count(n);
 loop(i, 0, n, 1) count[i] = 0;
 loop(i, 0 , m, 1){
  cin>>x>>y;
  x--;y--;
  d[x][y] = 1;
  d[y][x] = 1;
  count[x]++; count[y]++;
 }
 ll ans = 0;
 while(true){
  vll one;
  loop(i, 0, n, 1) if (count[i] == 1) {
   one.append(i);
   count[i]--;
  }
  if (one.empty()) break;
  else{
   loop(i, 0, one.size(), 1){
    loop(j, 0, n, 1) if (d[one[i]][j]) --count[j];
   }
  }
  ans++;
 }
 cout<<ans<<"\n";
 return 0;
}