#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin>>a[i];
    ll s[200005] = {};
    for(ll i = 0; i < n; i++)
        for(ll j = i+1; j< n; j++) s[a[i]+a[j]]++;
    ll m = 0;
    for(auto i: s) m = max(i, m);
    cout<<m<<"\n";
    return 0;
}