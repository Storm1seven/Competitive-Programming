#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    int n; cin>>n;
    cout<<max(n,max(n/100*10+n%10,n/10))<<endl;
    return 0;
}