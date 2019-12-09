#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    ll k; cin>>k;
    string s; cin>>s;
    int a[26] = {};
    string ans;
    for(auto i:s) a[i-'a']+=1;
    loop(i, 0, 26, 1){
        if (a[i]%k){
            cout<<-1<<"\n";
            return 0;
        }
        else{
            loop(j, 0, a[i]/k, 1) ans+=('a'+i);
        }
    }
    loop(i, 0, k, 1) cout<<ans;
    cout<<"\n";
    return 0;
}