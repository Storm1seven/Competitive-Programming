/*input
5
-1
1
2
1
-1
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
 ll n = intin();
 ll x;
 vll roots;
 map<ll, vll>d;
 loop(i, 1, n+1, 1){
  cin>>x;
  if (x == -1) roots.append(i);
  else d[x].append(i);
 }
 vll dist(n+1, 0);
 for(auto i:roots){
  queue<ll> q;
  q.push(i);
  while(q.size()){
   for(auto x:d[q.front()]){
    q.push(x);
    dist[x] = dist[q.front()]+1;
   }
   q.pop();
  }
 }
 ll ans = 0;
 for(auto i:dist) ans = max(ans, i);
 cout<<ans+1<<"\n";
 return 0;
}