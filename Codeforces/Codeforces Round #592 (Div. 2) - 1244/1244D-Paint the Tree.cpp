#include<bits/stdc++.h>
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
ll n;
vvll c(4);
vvll d;
vll chain;
vll vis;
void dfs(ll v){
 vis[v] = 1;
 chain.append(v);
 for(auto i:d[v]) if (!vis[i]) dfs(i);
}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 cin>>n;
 ll u, v;
 d.resize(n);
 vis = vll(n, 0);
 loop(i, 0, 3, 1) c[i+1] = vin(n);
 loop(i, 0, n-1, 1){
  cin>>u>>v;
  d[u-1].append(v-1);
  d[v-1].append(u-1);
 }
 ll root;
 loop(i, 0, n, 1){
  if (d[i].size() == 1) root = i;
  else if (d[i].size() > 2){
   cout<<-1<<endl;
   return 0;
  }
 }
 dfs(root);
 ll scheme[6][3] = {{1, 2, 3}, {1, 3, 2},{2, 1, 3}, {2, 3, 1}, {3, 1, 2}, {3, 2, 1}};
 ll mincost = 1e18;
 vll mincol;
 for(auto pattern:scheme){
  ll cost = 0;
  vll scol(n, 0);
  loop(i, 0, n, 1) scol[chain[i]] = pattern[i%3];
  loop(i, 0, n, 1) cost+=c[scol[i]][i];
  if (cost < mincost){
   mincost = cost;
   mincol = scol;
  }
 }
 cout<<mincost<<endl;
 for(auto i:mincol) cout<<i<<" ";
 cout<<endl;
 return 0;
}