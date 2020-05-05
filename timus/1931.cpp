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
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll comp = 0, maxcomp = 0, index = 0, cindex = 0;
    for(ll i = 1; i < n; i++){
        if (a[cindex] > a[i]){
            if (comp > maxcomp){
                maxcomp = comp;
                index = cindex;
            }
            comp = 1;
            cindex = i;
        }else{
            comp++;
        }
    }
    if (comp > maxcomp){
        maxcomp = comp;
        index = cindex;
    }
    cout << index+1 << endl;
    return 0;
}