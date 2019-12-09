/*input
abacaba
5
2 1 4
1 4 b
1 5 b
2 4 6
2 1 7
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
# define schar unordered_set<char>
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
string s;
ll countones(ll a){
 ll c = 0;
 while (a) c += a&1,a >>= 1;
 return c;
}
void update(ll index, ll start, ll end, ll val, ll pos){
 if (pos > end or pos < start) return;
 if (start == end and start == pos){
  tree[index] = 1<<val;
  return;
 }
 ll mid = (start+end)>>1;
 update(index<<1, start, mid, val, pos);
 update((index<<1)+1, mid+1, end, val, pos);
 tree[index] = tree[index<<1] | tree[(index<<1)+1];
}
ll query(ll index, ll start, ll end, ll l, ll r){
 if (l > end or r < start) return 0;
 if (l <= start and r >= end) return tree[index];
 ll mid = (start+end)>>1;
 return query(index<<1, start, mid, l, r) | query((index<<1)+1, mid+1, end, l, r);
}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 cin>>s;
 ll n = s.size();
 tree.resize(n<<2);
 loop(i, 0, n, 1) update(1, 0, n-1, s[i]-'a', i);
 ll q; cin>>q;
 ll type, l, r;
 char c;
 loop(_, 0, q, 1){
  cin>>type;
  if (type == 1){
   cin>>l>>c;
   update(1, 0, n-1, c-'a', l-1);
  }
  else{
   cin>>l>>r;
   ll ans = query(1, 0, n-1, l-1, r-1);
   cout<<countones(ans)<<endl;
  }
 }
 return 0;
}