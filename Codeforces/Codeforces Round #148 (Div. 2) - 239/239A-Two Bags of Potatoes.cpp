#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<"\n";}}
ll rup(ll a, ll b){
    return (a+b-1)/b;
}
int main(){
    ios_base::sync_with_stdio(false);
    ll y, n, k; cin>>y>>k>>n;
    ll flag = 0;
    ll l_limit = rup(y, k);
    if (y%k == 0) l_limit++;
    l_limit*=k;
    l_limit-=y;
    while(l_limit > 0 && l_limit <= n - y){
        flag = 1;
        cout<<l_limit<<" ";
        l_limit+=k;
    }
    if (flag == 0) cout<<-1<<"\n";
    return 0;
}