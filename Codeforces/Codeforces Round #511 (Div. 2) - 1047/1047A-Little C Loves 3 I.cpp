#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
int main(){
    std::ios_base::sync_with_stdio(false);
    ll n; cin>>n;
    if (n%3 != 2) cout<<1<<' '<<1<<' '<<n-2<<"\n";
    else cout<<1<<' '<<2<<' '<<n-3<<'\n';
    return 0;
}