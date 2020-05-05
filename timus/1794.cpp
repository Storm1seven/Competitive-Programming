# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin>>n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<ll> b(n);
    for(int i = 0; i < n; i++){
        b[(i-a[i]+1+n)%n]++;
    }
    ll val = 0, ans = 0;
    for(ll i = 0; i < n; i++){
        if (val < b[i]){
            val = b[i];
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}