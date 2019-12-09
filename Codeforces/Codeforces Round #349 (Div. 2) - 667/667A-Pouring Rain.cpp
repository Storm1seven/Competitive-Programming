/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll>>
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll>>
# define sll set<ll>
# define schar set<char>
# define pll pair<ll, ll>
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define popb pop_back
# define add insert
# define all(v) v.begin(), v.end()
# define rall(v) v.rbegin(), v.rend()
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' ';} cout<<'\n';}
int main(){
    ios_base::sync_with_stdio(false);
    long double d,h,v,e,s,pi=3.141592653;
    cin>>d>>h>>v>>e;
    if((pi*d*d*h/4)/(v-pi*d*d/4*e)<0) cout<<"NO\n";
    else{
        cout<<"YES\n";
        cout<<fixed<<setprecision(10)<<(pi*d*d*h/4)/(v-pi*d*d/4*e)<<"\n";
    }
    return 0;
}