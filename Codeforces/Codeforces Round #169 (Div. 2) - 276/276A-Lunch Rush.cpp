#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
int main(){
    ios_base::sync_with_stdio(false);
    ll n, k; cin>>n>>k;
    ll f, t, ans = -10000000000;
    for(int i = 0; i<n; i++){
        cin>>f>>t;
        if (t > k) ans = max(ans, f-(t-k));
        else ans = max(ans, f);
    }
    cout<<ans<<'\n';
    return 0;
}