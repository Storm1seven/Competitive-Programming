/*input
7
5 2 3 6 7 1 4
2 3 6 7 1 4 5
*/
# include<bits/stdc++.h>
# include<unordered_map>
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
vll tree;
vll a;
ll n;
void update(ll index, ll start, ll end, ll num){
 if (start == end and start == num){
  tree[index] = 1;
  return;
 }
 ll mid = (start+end)/2;
 if (num <= mid){
  update(2*index, start, mid, num);
 }
 else if (num > mid){
  update(2*index+1, mid+1, end, num);
 }
 tree[index] = tree[2*index]+tree[2*index+1];
}
ll query(ll index, ll start, ll end, ll l, ll r){
 if(l == start and r == end){
  return tree[index];
 }
 ll mid = (start+end)/2;
 if (r <= mid){
  return query(2*index, start, mid, l, r);
 }
 else if(l > mid){
  return query(2*index+1, mid+1, end, l, r);
 }
 else{
  return query(2*index, start, mid, l, mid) + query(2*index+1, mid+1, end, mid+1, r);
 }
}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 cin>>n;
 vll z = vin(n);
 unordered_map<ll, ll>m;
 loop(i, 1, n+1, 1) m[z[i-1]] = i;
 z = vin(n);
 loop(i, 0, n, 1) z[i] = m[z[i]];
 tree.resize(4*n, 0);
 reverse(all(z));
 a = z;
 ll ans = 0;
 loop(i, 0, n, 1){
  ans+=(query(1, 1, n, 1, a[i])!=0);
  update(1, 1, n, a[i]);
 }
 cout<<ans<<endl;
 return 0;
}