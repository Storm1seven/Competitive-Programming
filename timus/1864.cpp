# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<ll> a(n);
    long double avg = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        avg+=a[i];
    }
    avg/=(n+1);
    long double total = 0;
    for(ll i = 0; i < n; i++){
        if (a[i] > avg) total+=a[i]-avg;
    }
    vector<ll> ans(n);
    for(ll i = 0; i < n; i++){
        if (a[i] > avg) ans[i] = (a[i]-avg)*100*1.0/total;
        else ans[i] = 0;
    }
    for(auto i:ans) cout << fixed << setprecision(0) << i << " ";
    return 0;
}