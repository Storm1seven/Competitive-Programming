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
vvll d;
vvll dist;
void clear(){
    d.clear();
    d.resize(n);
    dist.clear();
    dist.resize(n, vll(n, -1));
}
void floydWarshall(){ 
    loop(i, 0, n, 1) 
        for (auto j:d[i]) dist[i][j] = 1;
	loop(k, 0, n, 1){ 
		loop(i, 0, n, 1){ 
			loop(j, 0, n, 1){ 
				if (dist[i][k] + dist[k][j] < dist[i][j]) 
					dist[i][j] = dist[i][k] + dist[k][j]; 
            } 
		} 
	} 
} 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    loop(_, 0, t, 1){
        cin>>n;
        clear();
        ll x, y;
        loop(i, 0, n-1, 1){
            cin>>x>>y;
            d[x-1].append(y-1);
            d[y-1].append(x-1);
        }
        vll valid = vin(n);
        floydWarshall();
        ll count = 0;
        loop(i, 0, n, 1){
            loop(j, i+1, n, 1){
                loop(k, j+1, n, 1){
                    if ((dist[i][j] == dist[i][k] == dist[j][k]) and valid[i] and valid[j] and valid[k]) count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}