#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
int main(){
    ll n, m, k;
    cin>>n>>m>>k;
    ll a[n], b[n], c[k], sch[105] = {};
    for(ll i = 0; i < n; i++) cin>>a[i];
    for(ll i = 0; i<n; i++){
        cin>>b[i];
        sch[b[i]] = max(sch[b[i]], a[i]);
    }
    ll count = 0;
    for(ll i = 0; i < k; i++){
        cin>>c[i];
        if (sch[b[c[i]-1]] > a[c[i]-1]) count++; 
    }
    cout<<count<<'\n';
    return 0;
}