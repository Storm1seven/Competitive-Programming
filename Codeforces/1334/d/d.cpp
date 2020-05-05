# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while (t--){
        ll n, l, r; cin >> n >> l >> r;
        vector <ll> a;
        a.push_back(0);
        for(ll i = 1; i <= n-1; i++){
            a.push_back(a.back()+2*(n-i));
        }
        ll pos = lower_bound(a.begin(), a.end(), l) - a.begin();
        ll p = pos, q = pos+1;
        ll count = 0;
        ll flag = 0;
        if (r == n*(n-1)+1){
            flag = 1;
            r--;
        }
        // cout << a << endl;
        for (ll i = a[pos-1]+1; i <= r; i++){
            // cout << i << endl;
            // cout << p << ' ' << q << endl;
            if (i >= l){
                if (count%2) cout << q << ' ';
                else cout << p << ' ';
            }
            count++;
            if (count%2 == 0){
                q++;
                if (q > n){
                    p++;
                    q = p+1;
                }
            }
        }
        if (flag) cout << 1 << '\n';
        else cout << '\n';
    }
    return 0;
}
