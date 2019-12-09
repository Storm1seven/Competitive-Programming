/*input
6 11
1 2
1 3
1 4
1 5
1 6
2 4
2 5
2 6
3 4
3 5
3 6
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
ll n, m;
vvll d;
vll vis;
bool notIn(unordered_set<int> v, int a){
 if (v.find(a) == v.end()) return true;
 return false;
}
void dfs(ll v){
 vis[v] = 1;
 for(auto i:d[v]) if (!vis[i]) dfs(i);
}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 ll u, v; cin>>n>>m;
 d.resize(n+1);
 vis.resize(n+1);
 fill(all(vis), 0);
 loop(i, 0, m, 1){
  cin>>u>>v;
  d[u].append(v);
  d[v].append(u);
 }
 set<vll> s;
 loop(i, 1, n+1, 1){
  sort(all(d[i]));
  s.add(d[i]);
 }
 if(s.size() != 3){
  cout<<-1<<endl;
  return 0;
 }
 dfs(1);
 vis[0] = 1;
 for(auto i:vis){
  if (i == 0){
   cout<<-1<<endl;
   return 0;
  }
 }
 map<vll, ll> m;
 ll num = 1;
 for(auto i:s){
  m[i] = num++;
 }
 loop(i, 1, n+1, 1){
  cout<<m[d[i]]<<" ";
 }
 cout<<endl;
 return 0;
}