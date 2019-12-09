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
# define printlist(a) {for(auto i : a){cout<<i<<' ';} cout<<' ';}
int main(){
    ios_base::sync_with_stdio(false);
    ll n, k; cin>>n>>k;
    vector<char> x;
    char c = 'a';
    loop(i ,0, 26, 1) x.append(c++);
    loop(i, 0, n, 1){
        cout<<x[i%k];
    }
    return 0;
}