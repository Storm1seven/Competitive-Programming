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
    ll r1, r2, c1, c2, d1, d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    ll a, b, c, d;
    a=(c1+d1-r2)/2;
    b=c1-a;
    c=r1-a;
    d=r2-b;
    sll s;
    s.add(a);
    s.add(b);
    s.add(c);
    s.add(d);
    if (s.size() == 4 && a>0 && b>0 && c>0 && d>0 && a <10 && b<10 && c<10 &&d<10){
        cout<<a<<" "<<c<<"\n";
        cout<<b<<" "<<d<<"\n";
    }
    else cout<<-1<<"\n";
    return 0;
}