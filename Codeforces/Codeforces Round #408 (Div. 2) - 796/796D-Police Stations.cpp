/*input
6 3 2
1 5 6
1 2
1 3
1 4
1 5
5 6
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
 ll n, k, d, x; cin>>n>>k>>d;
 queue<ll> q;
 vll vis(n+1, 0);
 loop(i, 0, k, 1){
  cin>>x;
  q.push(x);
  vis[x] = 1;
 }
 map<ll, vpll> g;
 sll s;
 loop(i, 0, n-1, 1){
  ll u, v;
  cin>>u>>v;
  g[u].append(make_pair(v, i+1));
  g[v].append(make_pair(u, i+1));
  s.add(i+1);
 }
 while(q.size()){
  for(auto i:g[q.front()]){
   if(!vis[i.first]){
    q.push(i.first);
    s.erase(i.second);
    vis[i.first] = 1;
   }
  }
  q.pop();
 }
 cout<<s.size()<<"\n";
 for(auto i:s) cout<<i<<" ";
 return 0;
}