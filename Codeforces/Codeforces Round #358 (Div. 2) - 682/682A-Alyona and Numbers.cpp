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
    ll n, m; cin>>n>>m;
    ll a[5] = {}, b[5] = {};
    loop(i, 1, n+1, 1) a[i%5]++;
    loop(i, 1, m+1, 1) b[i%5]++;
    ll ans = 0;
    loop(i, 1, 5, 1){
        ans+=a[i]*b[5-i];
    }
    ans+=a[0]*b[0];
    cout<<ans<<"\n";
    return 0;
}