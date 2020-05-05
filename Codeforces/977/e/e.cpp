# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>c
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
ll n, m;
vvll d;
vll color;
ll curr = 1;
void dfs(ll v){
    color[v] = curr;
    for(auto i:d[v]) if (!color[i]) dfs(i);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    ll x, y;
    d.resize(n);
    color.resize(n, 0);
    loop(i, 0, m, 1){
        cin>>x>>y;
        x--, y--;
        d[x].append(y);
        d[y].append(x);
    }
    loop(i, 0, n, 1){
        if (!color[i]){
            dfs(i);
            curr++;
        }
    }
    map<ll, vll> col;
    loop(i, 0, n, 1) col[color[i]].append(i);
    ll count = 0;
    for (auto i:col){
        ll flag = 1;
        for(auto j:i.second){
            if (d[j].size()!=2) flag = 0;
        }
        if (flag) count++;
    }
    cout<<count<<endl;
    return 0;
}
