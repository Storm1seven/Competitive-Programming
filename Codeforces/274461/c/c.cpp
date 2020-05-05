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
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll s, x1, x2; cin>>s>>x1>>x2;
    ll t1, t2; cin>>t1>>t2;
    ll p, d; cin>>p>>d;
    ll it = abs(x1-x2)*t2, tt = 0;
    if (p != x1){
        if (d == (x1-p)/abs(x1-p)){
            tt += abs(x1-p)*t1;
        }else{
            tt += abs(x1-p)*t1;
            if (d == -1){
                tt+=p*2*t1;
            }else{
                tt+=(s-p)*2*t1;
            }
            d*=-1;
        }
    }
    p = x1;
    if (p!=x2){
        if (d == (x2-p)/abs(x2-p)){
            tt += abs(x2-p)*t1;
        }else{
            tt += abs(x2-p)*t1;
            if (d == -1){
                tt+=p*2*t1;
            }else{
                tt+=(s-p)*2*t1;
            }
            d*=-1;
        }
    }
    cout<<min(tt, it)<<endl;
    return 0;
}
