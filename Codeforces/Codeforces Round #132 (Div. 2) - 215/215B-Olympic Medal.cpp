/*input
3 1 2 3
1 2
3 3 2 1
1 2
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
 ll n, m, k;
 cin>>n; vll x = vin(n);
 cin>>m; vll y = vin(m);
 cin>>k; vll z = vin(k);
 ll a, b;
 cin>>a>>b;
 ll r1 = 0, p1 = 0, p2 = 5001;
 for (auto i:x) r1 = max(r1, i);
 for (auto i:y) p1 = max(p1, i);
 for (auto i:z) p2 = min(p2, i);
 double r2 = (b*p1)*1.0;
 r2/=((b*p1)+(a*p2));
 r2 = sqrt(r2);
 r2*=r1;
 cout<<fixed<<setprecision(10)<<r2<<"\n";
 return 0;
}