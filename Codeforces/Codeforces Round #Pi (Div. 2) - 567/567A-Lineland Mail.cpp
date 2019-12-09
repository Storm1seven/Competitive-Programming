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
# define pop pop_back
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
    vll v(n);
    loop(i, 0, n, 1){
        cin>>a[i];
        v[i] = a[i];
    }
    sort(all(a));
    map<ll,pair<ll, ll>> d;
    d[a[0]] = make_pair(abs(a[0] - a[1]), abs(a[n-1] - a[0]));
    d[a[n-1]] = make_pair(abs(a[n-1] - a[n-2]), abs(a[n-1] - a[0]));
    loop(i, 1, n-1, 1){
        d[a[i]] = make_pair(min(abs(a[i] - a[i-1]), abs(a[i] - a[i+1])), max(abs(a[i] - a[0]), abs(a[i] - a[n-1])));
    }
    for(auto i:v) cout<<d[i].first<<" "<<d[i].second<<"\n";
    return 0;
}