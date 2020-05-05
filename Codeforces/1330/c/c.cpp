# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
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
    ll n, m; cin>>n>>m;
    vll l = vin(m);
    ll sum = 0;
    loop(i, 0, m, 1){
        sum+=l[i];
        if (l[i] > n-i){
            cout<<-1<<endl;
            return 0;
        }
    }
    if (sum < n){
        cout<<-1<<endl;
        return 0;
    }
    vll p(m, 0);
    ll curr = 1;
    loop(i, 0, m, 1){
        p[i] = curr;
        curr+=l[i];
    }
    for(ll i = m-1; i > -1; i--){
        if (p[i] > n-l[i]+1) p[i] = n-l[i]+1;
        if (i == m-1) continue;
        if (p[i] >= p[i+1]) p[i] = p[i+1]-1;
    }
    loop(i, 0, m, 1) cout<<p[i]<<" ";
    cout<<endl;
    return 0;
}
