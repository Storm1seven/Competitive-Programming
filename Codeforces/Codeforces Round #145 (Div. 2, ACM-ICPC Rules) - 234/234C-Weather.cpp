#include<bits/stdc++.h>
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
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
    ll n; cin>>n;
    vll a = vin(n);
    ll pcount = 0, ncount = 0;
    vll pc, nc;
    loop(i, 0, n, 1){
        pcount+=(a[i]>=0)*1;
        pc.append(pcount);
    }
    rloop(i, n-1, -1, -1){
        ncount+=(a[i]<=0)*1;
        nc.append(ncount);
    }
    reverse(all(nc));
    ll ans = 1e18;
    loop(i, 0, n, 1){
        if (i == 0) ans = min(nc[i+1]+(a[i]>=0), ans);
        else if (i == n-1) min(pc[i-1]+(a[i]<=0), ans);
        else ans = min(pc[i-1]+nc[i+1]+(a[i]==0), ans);
    }
    cout<<ans<<endl;
    return 0;
}