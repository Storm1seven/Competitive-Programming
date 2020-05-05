# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, m;
vector< vector< pair<ll, ll> > > d;
ll getmin(ll src, ll dest, ll init){
    vector<ll> dist(n, 1e6);
    dist[src] = 0;
    deque<pair<ll, ll> > q;
    q.push_back(make_pair(src, init));
    while(q.size()){
        pair<ll, ll> p = q.front();
        q.pop_front();
        for(auto i:d[p.first]){
            if (dist[i.first] > dist[p.first]+(i.second!=p.second)){
                dist[i.first] = dist[p.first]+(i.second!=p.second);
                if (i.second==p.second) q.push_front(i);
                else q.push_back(i);
            }
        }
    }
    return dist[dest];
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    d.resize(n);
    for(ll i = 0; i < m; i++){
        ll u, v; cin >> u >> v;
        u--, v--;
        d[u].push_back(make_pair(v, 0));
        d[v].push_back(make_pair(u, 1));
    }
    ll src, dest; cin >> src >> dest;
    src--, dest--;
    cout << min(getmin(src, dest, 0), getmin(src, dest, 1));
    return 0;
}