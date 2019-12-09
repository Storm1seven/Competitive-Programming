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
bool sortbydiff(const pair<int,int> &a, const pair<int,int> &b) { 
    return (a.second - a.first < b.second - b.first); 
}
int main(){
    ios_base::sync_with_stdio(false);
    ll n, a, b; cin>>n;
    vpll v;
    loop(i, 0, n, 1){
        cin>>a>>b;
        v.append(make_pair(a, b));
    }
    sort(all(v), sortbydiff);
    ll ans = 0;
    loop(i, 0, n, 1){
        ans+=v[i].first*(i+1 - 1) + v[i].second*(n-i-1);
    }
    cout<<ans<<"\n";
    return 0;
}