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
    ll n, k, x, y; cin>>n>>k;
    vector<pair<ll, ll>> v;
    loop(i, 0, n, 1){
        cin>>x>>y;
        v.append(make_pair(-x, y));
    }
    sort(v.begin(), v.end());
    cout<<count(v.begin(), v.end(), v[k-1])<<"\n";
    return 0;
}