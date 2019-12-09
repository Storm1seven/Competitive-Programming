/*input
6
3 1 0
0 3 0
2 2 0
1 0 0
1 3 0
0 1 0
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
struct point{
 ll x, y, z;
 point(ll a, ll b, ll c){
  x = a;
  y = b;
  z = c;
 }
};
ll dist(point a, point b){
 return (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y)+ (a.z-b.z)*(a.z-b.z);
}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 ll n, x, y, z; cin>>n;
 vector<point> a;
 loop(i, 0, n, 1){
  cin>>x>>y>>z;
  a.append(point(x, y, z));
 }
 vll vis(n, 0);
 loop(i, 0, n, 1){
  if (!vis[i]){
   ll mindist = 1e18;
   ll minind = -1;
   loop(j, i+1, n, 1){
    if (vis[j]) continue;
    ll d = dist(a[i], a[j]);
    if (d < mindist){
     mindist = d;
     minind = j;
    }
   }
   cout<<i+1<<" "<<minind+1<<endl;
   vis[minind] = 1;
   vis[i] = 1;
  }
 }
 return 0;
}