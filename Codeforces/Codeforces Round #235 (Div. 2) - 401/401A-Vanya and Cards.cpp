#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
#define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    ll n, x; cin>>n>>x;
    ll sum = 0;
    ll t;
    loop(i, 0, n, 1){
        cin>>t;
        sum+=t;
    }
    cout<<abs(sum)/x + (abs(sum)%x != 0)<<"\n";
    return 0;
}