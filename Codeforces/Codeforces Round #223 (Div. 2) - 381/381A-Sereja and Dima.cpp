/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
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
    ll n, x, y, s = 0, d = 0; cin>>n;
    deque<ll> q;
    loop(i, 0, n, 1){
        cin>>x;
        q.append(x);
    }
    loop(i, 0, n, 1){
        x = q.front();
        y = q.back();
        if (x < y) q.pop();
        else q.pop_left();
        if(i%2) d+=max(x, y);
        else s+=max(x, y);
    }
    cout<<s<<' '<<d<<"\n";
    return 0;
}