#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
int convert(char a){
    int x = a - '0';
    return x;
}
int main(){
    ios_base::sync_with_stdio(false);
    ll n, m;
    cin>>n>>m;
    vector<string> mark(n);
    loop(i, 0, n, 1) cin>>mark[i];
    ll success[n];
    vector<ll> sub_max(m);
    int x = 0;
    memset(success, 0, sizeof(success));
    loop(i, 0, m, 1){
        x = 0;
        loop(j, 0, n, 1){
            x = max(x, convert(mark[j][i]));
        }
        sub_max[i] = x;
    }
    loop(i, 0, m, 1){
        loop(j, 0, n, 1){
            if (convert(mark[j][i]) == sub_max[i]) success[j] = 1;
        }
    }
    ll count = 0;
    for(auto i:success) count+=i;
    cout<<count<<"\n";
    return 0;
}