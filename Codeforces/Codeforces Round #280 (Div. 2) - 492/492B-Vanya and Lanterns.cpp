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
    ll n, l; cin>>n>>l;
    vector<long double> a(n);
    loop(i, 0, n, 1) cin>>a[i];
    sort(all(a));
    long double max_diff = 0.0;
    loop(i, 1, n, 1) max_diff = max(max_diff, (a[i] - a[i-1])/2.0);
    max_diff = max(max_diff, a[0] - 0);
    max_diff = max(max_diff, l - a[n-1]);
    cout<<fixed<<setprecision(10)<<max_diff<<"\n";
    return 0;
}