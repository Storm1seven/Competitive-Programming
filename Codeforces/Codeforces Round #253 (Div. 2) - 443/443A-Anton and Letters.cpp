/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vpll vector<pair<ll, ll>>
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define pop pop_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    set<char> s;
    char x;
    while (true){
        cin>>x;
        if (x=='}'){
            s.add(x);
            break;
        }
        else s.add(x);
    }
    ll len = s.size();
    if (len > 3) cout<<len - 3<<"\n";
    else if (len == 3) cout<<len-2<<"\n";
    else cout<<0<<"\n";
    return 0;
}