/*input
+++
??-
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
int factorial(int n) {return (n==1 || n==0) ? 1: n * factorial(n - 1);} 
int num(int a, int b){
 return factorial(a)/(factorial(b)*factorial(a-b));
}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 string s1, s2;
 cin>>s1>>s2;
 int p1 = 0, p2 = 0, q = 0;
 for (auto i:s1){
  if (i == '+') p1++;
  else p1--;
 }
 for(auto i:s2){
  if (i == '+') p2++;
  else if (i == '-') p2--;
  else q++;
 }
 int req = p1-p2;
 if (abs(req) > q) cout<<0<<"\n";
 else if (q==0) cout<<1<<"\n";
 else{
  if (q%2 && req%2){
   double ans = num(q, req+(q-req)/2);
   ans /= pow(2, q);
   cout<<fixed<<setprecision(10)<<ans;
  }
  else if (q%2 == 0 && req%2 == 0){
   double ans = num(q, req+(q-req)/2);
   ans /= pow(2, q);
   cout<<fixed<<setprecision(10)<<ans;
  }
  else cout<<0<<"\n";
 }
 return 0;
}