#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
#define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    ll n, m; cin>>n>>m;
    set<ll> row;
    set<ll> column;
    char c;
    loop(i, 0, n, 1){
        loop(j, 0, m, 1){
            cin>>c;
            if (c == 'S'){
                row.add(i);
                column.add(j);
            }
        }
    }
    ll count = 0;
    loop(i, 0, n, 1){
        loop(j, 0, m, 1){
            if (row.find(i) != row.end() && column.find(j) != column.end()) count++;
        }
    }
    cout<<n*m - count<<"\n";
    return 0;
}