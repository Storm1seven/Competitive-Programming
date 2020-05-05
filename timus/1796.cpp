# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll a[] = {10, 50, 100, 500, 1000, 5000};
    ll sum = 0;
    map<ll, ll> m;
    for(ll i = 0; i < 6; i++){
        cin >> m[a[i]];
        sum+=m[a[i]]*a[i];
    }
    ll ticket; cin >> ticket;
    ll maxtick = sum/ticket;
    ll minval = 0;
    for(auto i:m){
        if (i.second > 0){
            minval = i.first;
            break;
        }
    }
    
    ll mintick = (sum-minval)/ticket + 1;
    cout << maxtick-mintick+1 << endl;
    for(ll i = mintick; i <= maxtick; i++){
        cout << i << " ";
    }
    return 0;
}