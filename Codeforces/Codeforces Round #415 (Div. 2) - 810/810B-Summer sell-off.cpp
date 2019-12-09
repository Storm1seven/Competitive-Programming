/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll>>
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll>>
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
bool func(const pll &a, 
              const pll &b) { 
    return (min(a.first, a.second) - min(a.first/2, a.second) > min(b.first, b.second) - min(b.first/2, b.second)); 
} 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n = intin();
    ll f = intin();
    ll ans = 0;
    ll k, l;
    vll v;
    loop(i, 0, n, 1){
        cin>>k>>l;
        ans+=min(k, l);
        v.append(min(2*k, l) - min(k, l));
    }
    sort(rall(v));
    loop(i, 0, v.size(), 1){
        if (i < f) ans+= v[i];
    }
    cout<<ans<<"\n";
    return 0;
}