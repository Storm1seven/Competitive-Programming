/*input
4 5
1 1
3
1 1
1 1
0 -2
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
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 ll n, m, k, x, y, dx, dy, total = 0, st;
 cin>>n>>m>>x>>y>>k;
 loop(i, 0, k, 1){
  cin>>dx>>dy;
  st=10000000000;
  if (dx>0) st=min(st,(n-x)/dx);
  if (dx<0) st=min(st,-(x-1)/dx);
  if (dy>0) st=min(st,(m-y)/dy);
  if (dy<0) st=min(st,-(y-1)/dy);
  total+=st;
  x+=dx*st;
  y+=dy*st;
 }
 cout<<total<<"\n";
 return 0;
}