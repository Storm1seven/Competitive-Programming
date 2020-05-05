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
ll n;
vll parent, s;
void init(ll v){
    parent[v] = v;
}
ll find(ll v){
    ll u = v;
    while (v != parent[v]) v = parent[v];
    while(u!=v){
        ll t = parent[u];
        parent[u] = v;
        u = t;
    }
    return v;
}
void join(ll u, ll v){
    ll a = find(u);
    ll b = find(v);
    if (a == b){
        cout<<"Invalid query!"<<endl;
        return;
    }
    if (s[a] > s[b]) parent[b] = a;
    else if (s[a] < s[b]) parent[a] = b;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    loop(i, 0, t, 1){
        cin>>n;
        parent.resize(n);
        loop(i, 0, n, 1) init(i);
        s = vin(n);
        ll q; cin>>q;
        ll type, x, y;
        loop(i, 0, n, 1){
            cin>>type;
            if (type){
                cin>>x;
                cout<<find(x-1)+1<<endl;
            }else{
                cin>>x>>y;
                join(x-1, y-1);
            }
        }
    }
    return 0;
}