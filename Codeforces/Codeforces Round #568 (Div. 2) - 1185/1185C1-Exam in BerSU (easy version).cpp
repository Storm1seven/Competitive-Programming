/*input
5 100
80 40 40 40 60
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
 vll t = vin(n);
 map<ll, ll> counter;
 loop(i, 1, 101, 1){
  counter[i] = 0;
 }
 ll sum = 0, diff, num, part;
 for (auto i:t){
  diff = sum+i-m;
  num = 0;
  if (diff>0){
   rloop(j, 100, -1, -1){
    part = counter[j]*j;
    if (part > diff){
     num+=(j+diff-1)/j;
     break;
    }
    else{
     num+=counter[j];
     diff-=part;
    }
   }
   sum+=i;
   counter[i]++;
   cout<<num<<" ";
  }
  else{
   sum+=i;
   counter[i]++;
   cout<<0<<" ";
  }
 }
 return 0;
}