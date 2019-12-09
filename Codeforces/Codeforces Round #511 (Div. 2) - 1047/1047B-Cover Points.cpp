#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
int main(){
    ios_base::sync_with_stdio(false);
    ll a;
    cin>>a;
    ll x, y, c = 0;
    for(ll i = 0; i < a; i++){
        cin>>x>>y;
        c = max(c, x+y);
    }
    cout<<c<<"\n";
    return 0;
}