/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll>>
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll>>
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
# define printlist(a) {for(auto i : a){cout<<i<<' ';} cout<<'\n';}
int main(){
    ios_base::sync_with_stdio(false);
    ll n; cin>>n;
    vll a(n);
    ll ans = 0;
    loop(i, 0, n, 1) cin>>a[i];
    ll count = 1;
    loop(i, 0, n, 1){
        ll f = i, b = i;
        while (b > 0 && a[b-1] <= a[b]) b--;
        while (f < n-1 && a[f] >= a[f+1]) f++;
        count = max(count, f-b+1);
    }
    cout<<count<<"\n";
    return 0;
}