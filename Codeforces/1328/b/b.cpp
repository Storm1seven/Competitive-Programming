# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
using namespace std;
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
vll vin(ll n){vll a(n);loop(i, 0, n, 1) cin>>a[i];return a;}
ll intin() {ll n; cin>>n; return n;}
char charin(){char a; cin>>a; return a;}
string strin(){string s; cin>>s; return s;}
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    vll a(1, 0);
    loop(i, 1, 100001, 1){
        a.append(a.back()+i);
    }
    loop(i, 0, t, 1){
        ll n, k; cin>>n>>k;
        auto x = lower_bound(all(a), k);
        ll index = x-a.begin();
        ll extra = k-a[index-1]-1;
        ll p = n-1-index;
        ll q = n-1-extra;
        vchar ans(n, 'a');
        ans[p] = 'b';
        ans[q] = 'b';
        for(auto i:ans) cout<<i;
        cout<<"\n";
    }
    return 0;
}
