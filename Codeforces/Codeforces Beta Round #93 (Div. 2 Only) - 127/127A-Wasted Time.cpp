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
    ll n, k, x, y; cin>>n>>k;
    vpll v;
    loop(i, 0, n, 1){
        cin>>x>>y;
        v.append(make_pair(x, y));
    }
    long double sum = 0.0;
    loop(i, 1, n, 1){
        sum+=sqrt(pow((v[i].first - v[i-1].first), 2) + pow((v[i].second - v[i-1].second), 2));
    }
    cout<<fixed<<setprecision(8)<<(sum*k)/50.0<<"\n";
    return 0;
}