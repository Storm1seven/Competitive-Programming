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
long double getval(long double b, long double c, long double x){
    return (x*x + b*x + c)/sin(x);
}
ll getdir(long double b, long double c, long double mid){
    if (getval(b, c, mid-0.000001) < getval(b, c, mid))
        return 0;
    return 1;
}
long double binary_search(long double hi, long double lo, long double b, long double c){
    loop(i, 0, 15, 1){
        long double mid = lo + (hi-lo)/2;
        if (getdir(b, c, mid) == 1)
            hi = mid;
        else
            lo = mid;
    }
    return lo;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    long double pi = 3.141592653589793238;
    loop(i, 0, t, 1){
        long double b, c; cin>>b>>c;
        long double ans = binary_search(0.00001, (long double) pi/2 - 0.0000001, b, c);
        cout<<fixed<<setprecision(10)<<getval(b, c, ans)<<endl;
    }
    return 0;
}