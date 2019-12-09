/*input
4 1 1 1
544 397
280 101
280 101
693 970
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
 ll n, t1, t2, k, a, b;
 cin>>n>>t1>>t2>>k;
 vector<pair<double, ll> > ans;
 loop(i, 0, n, 1){
  cin>>a>>b;
  ans.append(make_pair(-max(a*t1*(100-k)+b*t2*100,b*t1*(100-k)+a*t2*100),i+1));
 }
 sort(all(ans));
 for(auto i:ans){
  cout<<i.second<<" "<<fixed<<setprecision(2)<<-0.01*i.first<<"\n";
 }
 return 0;
}