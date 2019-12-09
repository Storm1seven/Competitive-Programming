/*input
5 4 2
1 2 5
1 2 3
2 3 4
1 4 10
1 5
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
 ll n, m, k; cin>>n>>m>>k;
 map<ll, vpll> d;
 ll u, v, x;
 loop(i, 0, m, 1){
  cin>>u>>v>>x;
  d[u].append(make_pair(v, x));
  d[v].append(make_pair(u, x));
 }
 ll min_dist = 10000000000;
 if (k){
  sll f;
  vll bakery(n+1, 0);
  loop(i, 0, k , 1){
   cin>>x;
   f.add(x);
   bakery[x] = 1;
  }
  for(auto i:f){
   for(auto j:d[i]){
    if (bakery[j.first] == 0){
     min_dist = min(min_dist, j.second);
    }
   }
  }
  if (min_dist < 10000000000){
   cout<<min_dist<<"\n";
  }
  else cout<<"-1\n";
 }
 else cout<<"-1\n";
 return 0;
}