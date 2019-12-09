#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    ll n; cin>>n;
    map<ll, ll> d;
    loop(i, 0, n, 1){
        int x; cin>>x;
        if (x==25) d[25]++;
        else if (x==50){
            d[50]++;
            if (d[25]) d[25]--;
            else{
                cout<<"NO\n";
                return 0;
            }
        }
        else{
            d[100]++;
            if ((d[25] >= 1 && d[50] >= 1)){
                d[25]--;
                d[50]--;
            }
            else if (d[25] >= 3) d[25]-=3;
            else {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    return 0;
}