#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    ll n, x, y; cin>>n;
    ll end = 0, start = 1000000001;
    ll ans = -1;
    vector<pair<ll, ll>> v;
    loop(i, 0, n, 1){
        cin>>x>>y;
        v.append(make_pair(x, y));
        start = min(start, x);
        end = max(end, y);
    }
    loop(i, 0, n, 1){
        if (v[i].first == start && v[i].second == end){
            cout<<i+1<<"\n";
            return 0;
        }
    }
    cout<<-1<<'\n';
    return 0;
}