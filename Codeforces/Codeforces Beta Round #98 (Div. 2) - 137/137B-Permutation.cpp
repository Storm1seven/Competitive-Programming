#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
#define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    ll n; cin>>n;
    ll a[n+1] = {}, x;
    loop(i, 0, n, 1){
        cin>>x;
        if (x<=n) a[x]=1;
    }
    ll count = 0;
    for(auto i:a) if (i) count++;
    cout<<n - count<<"\n";
    return 0;
}