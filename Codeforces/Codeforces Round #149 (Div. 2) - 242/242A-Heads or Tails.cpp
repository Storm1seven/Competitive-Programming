#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    ll x, y, a, b;
    cin>>x>>y>>a>>b;
    if (a <= b) a = b+1;
    ll count = 0;
    pair<ll, ll> p;
    vector<pair<ll, ll>> v;
    loop(i, a, x+1, 1){
        loop(j, b, min(i, y+1), 1){
            count++;
            p = make_pair(i, j);
            v.append(p);
        }
    }
    if (count){
        cout<<count<<"\n";
        for(auto i:v){
            cout<<i.first<<' '<<i.second<<"\n";
        }
    }
    else cout<<"0"<<"\n";
    return 0;
}