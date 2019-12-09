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
    ll n, k; cin>>n>>k;
    vll a(2*n+1);
    loop(i, 0, 2*n+1, 1) cin>>a[i];
    loop(i, 0, 2*n+1, 1){
        if (k && a[i] - 1 > a[i-1] && a[i] - 1 > a[i+1]){
            cout<<a[i]-1<<" ";
            k--;
        }
        else cout<<a[i]<<" ";
    }
    return 0;
}