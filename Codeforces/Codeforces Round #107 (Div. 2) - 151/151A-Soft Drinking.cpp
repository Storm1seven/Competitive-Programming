#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
int main(){
    ios_base::sync_with_stdio(false);
    ll n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll ans = min((l*k)/nl, c*d);
    ans = min(ans, p/np);
    ans/=n;
    cout<<ans<<'\n';
    return 0;
}