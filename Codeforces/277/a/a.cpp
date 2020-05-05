/*input
2 2
1 2
0
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
vvll d;
vll col;
ll c;
void dfscol(ll v){
	col[v] = c;
	for(auto i:d[v]){
		if (!col[i]) dfscol(i);
	}
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n, m, k, l; cin>>n>>m;
	d.resize(n+m+5);
	col.resize(n+m+5, 0);
    ll flag = 0;
	loop(i, 0, n, 1){
		cin>>k;
		loop(j, 0, k, 1){
			cin>>l;
            if (l) flag = 1;
			d[l].append(m+i+1);
			d[m+i+1].append(l);
		}
	}
    if (!flag){
        cout<<n<<endl;
        return 0;
    }
	c = 0;
	loop(i, m+1, n+m+1, 1){
		if (!col[i]){
			c++;
			dfscol(i);
		}
	}
	cout<<c-1<<endl;
	return 0;
}
