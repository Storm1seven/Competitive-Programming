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
ll n, m, x, y, INF = 1000000000000;
vpll moves;
ll check(ll i, ll j){
    if (i < m and j < n) return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    moves.append(make_pair(0, 1));
    moves.append(make_pair(1, 0));
    moves.append(make_pair(1, 1));
    while(t--){
        cin>>m>>n>>x>>y;
        vvll grid(m, vll(n, 0));
        loop(i, 0, m, 1) loop(j, 0, n, 1) cin>>grid[i][j];
        vvll dist(m, vll(n, INF));
        set<pair<ll, pll> > s;
        dist[0][0] = 0;
        s.add(make_pair(0, make_pair(0, 0)));
        while(s.size()){
            pair<ll, pll> f = *s.begin();
            s.erase(s.begin());
            ll x1 = f.second.first, y1 = f.second.second;
            for(auto i:moves){
                ll x2 = x1+i.first, y2 = y1+i.second;
                if (check(x2, y2)){
                    if (dist[x2][y2] > dist[x1][y1] + grid[x2][y2]){
                        if (dist[x2][y2] != INF) s.erase(make_pair(dist[x2][y2], make_pair(x2, y2)));
                        dist[x2][y2] = dist[x1][y1]+grid[x2][y2];
                        s.add(make_pair(dist[x2][y2], make_pair(x2, y2)));
                    }
                }
            }
        }
        if (dist[x-1][y-1] <= grid[0][0]) cout<<"Escape"<<endl;
        else cout<<"Died"<<endl;
    }
    return 0;
}