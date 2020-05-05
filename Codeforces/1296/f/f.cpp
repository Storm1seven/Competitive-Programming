# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
#include<prettyprint.hpp>
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
vvll d;
vvll parent;
ll n, m;
void buildParent(int src){
    parent[src][src] = -1;
    queue<ll> q;
    q.push(src);
    while(q.size()){
        ll f = q.front();
        q.pop();
        for(auto i:d[f]){
            if (parent[src][i] == -10){
                parent[src][i] = f;
                q.push(i);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    d.resize(n);
    parent.resize(n, vll(n, -10));
    map<pll, ll> edge;
    ll x, y;
    loop(i, 0, n-1, 1){
        cin>>x>>y;
        d[x-1].append(y-1);
        d[y-1].append(x-1);
        edge[make_pair(min(x-1, y-1), max(x-1, y-1))] = i;
    }
    loop(i, 0, n, 1) buildParent(i);
    vll f(n-1, 0);
    cin>>m;
    ll a, b, w;
    vector<pair<ll, pll> > q;
    loop(i, 0, m, 1){
        cin>>a>>b>>w;
        q.append(make_pair(w, make_pair(a-1, b-1)));
    }
    sort(rall(q));
    for(auto query:q){
        a = query.second.first;
        b = query.second.second;
        w = query.first;
        while (b!=a){
            f[edge[make_pair(min(parent[a][b], b), max(parent[a][b], b))]] = max(f[edge[make_pair(min(parent[a][b], b), max(parent[a][b], b))]], w);
            b = parent[a][b];
        }
    }
    loop(i, 0, n-1, 1) if (f[i] == 0) f[i] = 1000000;
    for(auto query:q){
        a = query.second.first;
        b = query.second.second;
        w = query.first;
        while (b!=a){
            if (f[edge[make_pair(min(parent[a][b], b), max(parent[a][b], b))]] < w){
                cout<<-1<<endl;
                return 0;
            }
            b = parent[a][b];
        }
    }
    for(auto i:f) cout<<i<<" ";
    cout<<endl;
    return 0;
}
