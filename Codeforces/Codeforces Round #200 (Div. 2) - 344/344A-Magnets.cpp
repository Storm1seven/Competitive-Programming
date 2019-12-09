/* I feel the need... the need for speed. */
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
    ll n, count = 0; cin>>n;
    string s;
    vector<string> v;
    loop(i, 0, n, 1){
        cin>>s;
        v.append(s);
    }
    loop(i, 1, n, 1) count+=(v[i-1]!=v[i]);
    cout<<count+1<<"\n";
    return 0;
}