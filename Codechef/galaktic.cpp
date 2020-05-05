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
ll n, m, ncc;
vll parent, cost, weight;
void init(ll v){
    parent[v] = v;
    weight[v] = 1;
}
ll find(ll v){
    if (parent[v] == v) return v;
    return parent[v] = find(parent[v]);
}
void join(ll u, ll v){
    ll a = find(u);
    ll b = find(v);
    if (a == b) return;
    ncc--;
    if (weight[a] < weight[b]) swap(a, b);
    parent[b] = a;
    weight[a]+=weight[b];
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    ncc = n;
    parent.resize(n, 0);
    weight.resize(n, 1);
    cost.resize(n, -1);
    loop(i, 0, n, 1) init(i);
    ll x, y;
    loop(i, 0, m, 1){
        cin>>x>>y;
        join(x-1, y-1);
    }
    if (ncc == 1){
        cout<<0<<endl;
        return 0;
    }
    loop(i, 0, n, 1) cin>>cost[i];
    vll cmin(n, -1);
    loop(i, 0, n, 1){
        if (cost[i] < 0) continue;
        ll p = find(i);
        if (cmin[p] < 0 || cost[i] < cmin[p]) cmin[p] = cost[i];
    }
    ll sum = 0;
    ll minCost = 1000000000000;
    loop(i, 0, n, 1){
        if (parent[i] != i) continue;
        if (cmin[i] < 0){
            cout<<-1<<endl;
            return 0;
        }
        sum+=cmin[i];
        minCost = min(cmin[i], minCost);
    }
    cout<<sum+(ncc-2)*minCost<<endl;
    return 0;
}