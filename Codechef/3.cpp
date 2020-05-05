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
vll parent, weight;
void make(ll v){
    parent[v] = v;
    weight[v] = 1;
}
ll find(ll v){
    if (parent[v] == v) return v;
    return parent[v] = find(parent[v]);
}
void merge(ll u, ll v){
    ll a = find(u);
    ll b = find(v);
    if (a == b) return;
    if (weight[a] < weight[b]) swap(a, b);
    parent[b] = a;
    weight[a]+=weight[b];
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    parent.resize(n);
    weight.resize(n);
    loop(i, 0, n, 1) make(i);
    ll q; cin>>q;
    ll type, u, v;
    loop(i, 0, q, 1){
        cin>>type>>u>>v;
        if (type == 1){
            merge(u-1, v-1);
        }else{
            if (find(u-1) == find(v-1)) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    return 0;
}