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
    ll n, k; cin>>n>>k;
    vll a = vin(n);
    vpll z;
    loop(i, 0, n, 1) z.append(make_pair(a[i], i));
    sort(all(z));
    vll ans(n, 0);
    ll x, y;
    vll count(n, 0);
    loop(i, 0, k, 1){
        cin>>x>>y;
        x--; y--;
        if (a[x] < a[y]) count[y]++;
        else if (a[y] < a[x]) count[x]++;
    }
    ll rep = 0;
    loop(i, 1, n, 1){
        if (z[i].first == z[i-1].first) rep++;
        else rep = 0;
        ans[z[i].second] = i - count[z[i].second] - rep;
    }
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
    return 0;
}
