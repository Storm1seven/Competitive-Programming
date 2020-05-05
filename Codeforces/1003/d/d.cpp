# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, q; cin >> n >> q;
    map<ll, ll> m;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        m[x]++;
    }
    for(ll i = 0; i < q; i++){
        ll num; cin >> num;
        ll count = 0;
        for(ll i = 1<<30; i >= 1; i/=2){
            count+=min(m[i], num/i);
            num-=i*min(m[i], num/i);
        }
        if (num > 0){
            cout << -1 << endl;
        }else{
            cout << count << endl;
        }
    }
    return 0;
}
