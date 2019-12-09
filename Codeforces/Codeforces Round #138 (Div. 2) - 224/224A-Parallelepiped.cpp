#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    ll ab, bc, ac;
    cin>>ab>>bc>>ac;
    ll t = (ab*ac)/bc + (bc*ab)/ac + (ac*bc)/ab + 2*(ab + bc + ac);
    cout<<4 * sqrt(t)<<endl;
    return 0;
}