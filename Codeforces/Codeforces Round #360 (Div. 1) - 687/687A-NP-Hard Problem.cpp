/*input
10 9
2 5
2 4
2 7
2 9
2 3
2 8
2 6
2 10
2 1
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
 ll n, m; cin>>n>>m;
 map<ll, vll> d;
 ll x, y;
 loop(i, 0, m, 1){
  cin>>x>>y;
  --x, --y;
  d[x].append(y);
  d[y].append(x);
 }
 vll color(n, -1);
 loop(i, 0, n, 1){
  if (color[i] == -1){
   queue<ll> q;
   q.push(i);
   color[i] = 0;
   while(q.size()){
    for(auto j:d[q.front()]){
     if (color[j] == -1){
      q.push(j);
      color[j] = (color[q.front()]+1)%2;
     }
     else{
      if(color[q.front()] == color[j]){
       cout<<"-1\n";
       return 0;
      }
     }
    }
    q.pop();
   }
  }
 }
 sll a, b;
 loop(i, 0, n, 1){
  if (color[i] == 1) a.add(i);
  else b.add(i);
 }
 cout<<a.size()<<"\n";
 for(auto i:a) cout<<i+1<<" ";
 cout<<"\n";
 cout<<b.size()<<"\n";
 for(auto i:b) cout<<i+1<<" ";
 cout<<"\n";
 return 0;
}