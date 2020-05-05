# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<ll > a(n);
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    ll x, y; cin >> x >> y;
    ll diff = (abs(x-y))/2;
    ll first = 0, second = 0;
    if (x < y){
        for(ll i = 0; i < x+diff; i++) first+=a[i];
    }else if (x > y){
        for(ll i = x-diff-1; i < n; i++) first+=a[i];
    }else{
        ll first1 = 0, first2 = 0;
        for(ll i = 0; i < x+diff; i++) first1+=a[i];
        for(ll i = x-diff-1; i < n; i++) first2+=a[i];
        first = max(first1, first2);
    }
    second = sum-first;
    cout << first << " " << second;
    return 0;
}