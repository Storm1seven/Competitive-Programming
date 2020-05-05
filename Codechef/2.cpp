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
    while(t--){
        ll n, m, u, v; cin>>n>>m>>u>>v;
        u--; v--;
        vector<vector<pair<ll, long double> > > d(n);
        ll x, y, len, sp;
        loop(i, 0, m, 1){
            cin>>x>>y>>len>>sp;
            x--; y--;
            sp = 1;
            long double time = (len*1.0)/(sp*1.0);
            d[x].append(make_pair(y, time));
            d[y].append(make_pair(x, time));
        }
        set<pair<long double, ll> > s;
        long double INF = 1000000000.0;
        vector<long double> dist(n, INF);
        s.add(make_pair(0, u));
        dist[u] = 0;
        while(s.size()){
            pair<long double, ll> f = *s.begin();
            s.erase(s.begin());
            x = f.second;
            for(auto i:d[x]){
                y = i.first;
                long double weight = i.second;
                if (dist[y] > dist[x]+weight){
                    if (dist[y]!=INF) s.erase(make_pair(dist[y], y));
                    dist[y] = dist[x]+weight;
                    s.add(make_pair(dist[y], y));
                }
            }
        }
        if (dist[v] == INF) cout<<-1<<"\n";
        else cout<<fixed<<setprecision(6)<<dist[v]<<"\n";
    }
    return 0;
}