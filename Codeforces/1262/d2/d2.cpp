# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
# define ll long long
// # define ll int
# define vll vector<ll>
# define vvll vector<vector<ll> >
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll> >
# define mll map<ll, ll>
# define sll set<ll>
# define usll unordered_set<ll>
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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
vll vin(ll n){vll a(n);loop(i, 0, n, 1) cin>>a[i];return a;}
ll intin() {ll n; cin>>n; return n;}
char charin(){char a; cin>>a; return a;}
string strin(){string s; cin>>s; return s;}
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin>>n;
    vll a = vin(n);
    ll m; cin>>m;
    ll k, pos, index;
    vector<pair<pll, ll> > q;
    loop(i, 0, m, 1){
        cin>>k>>pos;
        q.append(make_pair(make_pair(k, pos), i));
    }
    sort(all(q));
    ordered_set s;
    vpll z;
    loop(i, 0, n, 1) z.append(make_pair(-a[i], i));
    ll zin = 0;
    sort(all(z));
    vll ans(m);
    for(auto i:q){
        k = i.first.first;
        pos = i.first.second;
        index = i.second;
        while (s.size() < k){
            s.add(z[zin++].second);
        }
        ans[index] = a[*s.find_by_order(pos-1)];
    }
    for(auto i:ans) cout<<i<<endl;
    return 0;
}
