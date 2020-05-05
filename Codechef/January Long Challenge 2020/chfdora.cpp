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
int expand(ll a, ll b, ll delta, ll n, ll m){
    if (a+delta <= n-1 and a-delta >= 0 and b+delta <= m-1 and b-delta >= 0) return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    loop(_, 0, t, 1){
        ll n, m; cin>>n>>m;
        vvll z;
        loop(i, 0, n, 1){
            vll a = vin(m);
            z.append(a);
        }
        ll count = n*m;
        loop(i, 0, n, 1){
            loop(j, 0, m, 1){
                ll delta = 1;
                while(expand(i, j, delta, n, m)){
                    if (z[i+delta][j] == z[i-delta][j] and z[i][j+delta] == z[i][j-delta]) count+=1;
                    else break;
                    delta+=1;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}