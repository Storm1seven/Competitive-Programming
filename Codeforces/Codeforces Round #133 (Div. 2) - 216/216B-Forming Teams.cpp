/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll>>
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll>>
# define sll set<ll>
# define schar set<char>
# define pll pair<ll, ll>
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define pop pop_back
# define add insert
# define all(v) v.begin(), v.end()
# define rall(v) v.rbegin(), v.rend()
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' ';} cout<<'\n';}
map<ll, vll> d;
ll len, deg;
int visit[105] = {};
void dfs(int v){
    if (visit[v] == 0){
        visit[v] = 1;
        len++;
        deg+=d[v].size();
        for(auto i:d[v]) dfs(i);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    ll n, m, x, y; cin>>n>>m;
    ll count = 0;
    loop(i, 0, m, 1){
        cin>>x>>y;
        d[--x].append(--y);
        d[y].append(x);
    }
    loop(i, 0, n, 1){
        len = deg = 0;
        dfs(i);
        if (len%2 == 1 && len*2 == deg) count++;
    }
    if ((n-count)%2) cout<<count+1<<"\n";
    else cout<<count<<"\n";
    return 0;
}