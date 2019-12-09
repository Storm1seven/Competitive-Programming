/*input
2 3 0 20
15 17
23 26
1 4
7 11
15 17
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
 ll p, q, l, r;
 cin>>p>>q>>l>>r;
 vll x(1001), y(1001);
 ll a, b, c, d;
 loop(i, 0, p, 1){
  cin>>a>>b;
  loop(i, a, b+1, 1) x[i] = 1;
 }
 loop(i, 0, q, 1){
  cin>>c>>d;
  loop(i, c, d+1, 1) y[i] = 1;
 }
 ll count = 0;
 loop(i, l, r+1, 1){
  loop(j, 0, 1001, 1){
   if (j+i < 1001){
    if (y[j] == 1 && x[i+j] == 1) {
     count++;
     break;    }
   }
  }
 }
 cout<<count<<"\n";
 return 0;
}