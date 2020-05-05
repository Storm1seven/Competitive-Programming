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
ll n;
vvll d;
vll dia, parent, vis;
pll getFarthest(vll v){
    vll dist(n+1, 0);
    parent.resize(n+1, -1);
    for(auto i:v) vis[i] = 1;
    queue<ll> q;
    for(auto i:v) q.push(i);
    while (q.size()){
        ll f = q.front();
        q.pop();
        for(auto i:d[f]){
            if (!vis[i]){
                vis[i] = 1;
                parent[i] = f;
                dist[i] = dist[f]+1;
                q.push(i);
            }
        }
    }
    ll maxDist = 0, maxV = -1;
    loop(i, 0, n+1, 1){
        if (dist[i] >= maxDist){
            maxDist = dist[i];
            maxV = i;
        }
    }
    return make_pair(maxV, maxDist);
}
void fillDia(ll a, ll b){
    ll curr = b;
    while (curr!=a){
        curr = parent[curr];
        dia.append(curr);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    d.resize(n+1, vll());
    ll x, y;
    loop(i, 0, n, 1){
        cin>>x>>y;
        d[x].append(y);
        d[y].append(x);
    }
    vis.clear();
    vis.resize(n+1, 0);
    pll a = getFarthest(vll(1, 1));
    vis.clear();
    vis.resize(n+1, 0);
    pll b = getFarthest(vll(1, a.first));
    if (b.second == n-1){
        cout<<b.second<<endl;
        ll c;
        loop(i, 1, n+1, 1) if (i!=a.first and i!=b.first) c = i;
        cout<<a.first<<" "<<b.first<<" "<<c<<endl;
        return 0;
    }
    fillDia(a.first, b.first);
    vis.clear();
    vis.resize(n+1, 0);
    vis[a.first] = vis[b.first] = 1;
    pll c = getFarthest(dia);
    cout<<b.second+c.second<<endl;
    cout<<a.first<<" "<<b.first<<" "<<c.first<<endl;
    return 0;
}
