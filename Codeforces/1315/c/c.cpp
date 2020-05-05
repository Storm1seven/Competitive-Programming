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
void solve(){
    ll n; cin>>n;
    vll a = vin(n);
    sll s;
    loop(i, 1, 2*n+1, 1) s.add(i);
    for(auto i:a){
        if (s.find(i) == s.end()){
            cout<<-1<<endl;
            return;
        }
        s.erase(i);
    }
    vll b(2*n, 0);
    loop(i, 0, n, 1){
        b[2*i] = a[i];
    }
    loop(i, 1, 2*n, 2){
        auto x = upper_bound(all(s), b[i-1]);
        if (x == s.end()){
            cout<<-1<<endl;
            return;
        }
        s.erase(x);
        b[i] = *x;
    }
    loop(i, 0, n, 1){
        if (a[i] != min(b[2*i], b[2*i+1])){
            cout<<-1<<endl;
            return;
        }
    }
    for(auto i:b) cout<<i<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    loop(_, 0, t, 1){
        solve();
    }
    return 0;
}
