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
int main(){
    ios_base::sync_with_stdio(false);
    ll n = intin();
    vll a = vin(n);
    ll m = intin();
    vll x = {0};
    for(auto i:a) x.append(x.back()+i);
    sort(all(a));
    vll y = {0};
    for(auto i:a) y.append(y.back()+i);
    ll p, q, r;
    while(m--){
        cin>>p>>q>>r;
        if (p == 1){
            cout<<x[r] - x[q-1]<<"\n";
        }
        else{
            cout<<y[r] - y[q-1]<<"\n";
        }
    }
    return 0;
}