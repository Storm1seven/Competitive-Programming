/*input
7 1
1 0 1 1 0 0 0
1 2
1 3
2 4
2 5
3 6
3 7
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
ll n, m, ans = 0;
vll cats;
vll d[200005];
vll visited(200005, 0);
int check_leaf(ll v, ll current){
  if (d[v].size() == 1 && visited[d[v][0]] == 1) return 1;
  return 0;
}
void dfs(ll v, ll current){
  if (!visited[v]){
    visited[v] = 1;
    if (cats[v]) current++;
    else current = 0;
    if (current > m) return;
    if (check_leaf(v, current)) ans++;
    for(auto i:d[v]){
      if(!visited[i]) dfs(i, current);
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  cin>>n>>m;
  ll x, y;
  loop(i, 0, n, 1){
    cin>>x;
    cats.append(x);
  }
  loop(i, 0, n-1, 1){
    cin>>x>>y;
    --x, --y;
    d[x].append(y);
    d[y].append(x);
  }
  dfs(0, 0);
  cout<<ans<<"\n";
  return 0;
}