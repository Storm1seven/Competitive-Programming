/*input
4
3 2 3 6
2 8 5 10
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
ll n;
vll a, b;
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 cin>>n;
 a = vin(n);
 b = vin(n);
 vll rep;
 unordered_map<ll, ll> m;
 for(auto i:a) m[i]++;
 for(auto i:m) if (i.second > 1) rep.append(i.first);
 vll inc(n, 0);
 loop(i, 0, rep.size(), 1){
  loop(j, 0, n, 1){
   if ((rep[i]&a[j]) == a[j]) inc[j] = 1;
  }
 }
 ll ans = 0;
 loop(i, 0, n, 1) ans+=inc[i]*b[i];
 cout<<ans<<endl;
 return 0;
}