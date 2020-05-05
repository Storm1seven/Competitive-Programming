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
ll squareRoot(ll x) {   
  long double sr = sqrt(x);
  if (sr == floor(sr)){
      return floor(sr);
  }
  return -1;
} 
ll powerMod(ll x, ll y, ll p){  
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0){  
        if (y & 1)  
            res = (res*x) % p;  
        y = y>>1;
        x = (x*x) % p;  
    }  
    return res;  
} 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll mod = 1000000007;
    ll mxn = pow(10, 18);
    vvll d(1000*1000+10);
    loop(i, 2, 1000*1000, 1){
        if (d[i].size() == 1) continue;
        ll exp = 2;
        while (1){
            ll p = pow(i, exp);
            if (p <= mxn and p > 0){
                d[i].append(p);
                exp++;
                if (p <= 1000*1000) d[p].append(-1);
            }
            else break;
        }
    }
    d[1].append(1);
    ll t; cin>>t;
    while (t--){
        ll n; cin>>n;
        ll ans = 0;
        ll crt = cbrt(n);
        ll srt = sqrt(n);
        loop(i, 1, crt+1, 1){
            if (d[i][0] == -1) continue;
            for(auto val:d[i]){
                if (val > n) break;
                // ll x = squareRoot(val);
                // if (crt < x and x <= srt) continue;
                cout<<val<<endl;
                ans+=(n-val+1);
                ans%=mod;
            }
        }
        // ll sumSquares = (((srt*(srt+1)%mod)*(2*srt+1)%mod)*powerMod(6, mod-2, mod))%mod;
        // sumSquares -= (((crt*(crt+1)%mod)*(2*crt+1)%mod)*powerMod(6, mod-2, mod))%mod;
        // sumSquares+=mod;
        // sumSquares%=mod;
        // ans+=sumSquares;
        // ans%=mod;
        // ans+=(n+1)*(srt-crt);
        cout<<ans<<endl;
    }
    return 0;
}