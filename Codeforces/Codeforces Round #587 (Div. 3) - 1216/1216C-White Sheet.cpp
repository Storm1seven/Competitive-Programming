/*input
0 0 1000000 1000000
0 0 1000000 999999
0 0 999999 1000000
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
ll max(ll a, ll b){
 if (a > b) return a;
 return b;
}
ll min(ll a, ll b){
 if (a < b) return a;
 return b;
}
struct rect{
 ll left, right, top, bottom;
 rect(ll l, ll r, ll t, ll b){
  left = l;
  right = r;
  top = t;
  bottom = b;
 }
 ll area(){
  if (right <= left || top <= bottom) return 0;
  return (top-bottom)*(right-left);
 }
};
rect intersection(rect a, rect b){
 return rect(max(a.left, b.left), min(a.right, b.right), min(a.top, b.top), max(a.bottom, b.bottom));
}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 ll l, b, r, t;
 cin>>l>>b>>r>>t;
 rect w = rect(l, r, t, b);
 cin>>l>>b>>r>>t;
 rect b1 = rect(l, r, t, b);
 cin>>l>>b>>r>>t;
 rect b2 = rect(l, r, t, b);;
 rect wb1 = intersection(w, b1);
 rect wb2 = intersection(w, b2);
 rect wb1b2 = intersection(wb1, wb2);
 if (w.area() > max(0, wb1.area())+max(0, wb2.area())-max(0, wb1b2.area())) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 return 0;
}