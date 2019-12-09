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
# define pop pop_back
# define add insert
# define all(v) v.begin(), v.end()
# define rall(v) v.rbegin(), v.rend()
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' ';} cout<<'\n';}
int main(){
    ios_base::sync_with_stdio(false);
    ll n; cin>>n;
    ll x, y;
    vll a, b;
    loop(i, 0, n, 1){
        cin>>x>>y;
        a.append(x);
        b.append(y);
    }
    int flag = 1;
    loop(i, 0, n, 1){
        if (a[i]!=b[i]) flag = 0;
    }
    if (flag){
        sort(rall(a));
        int flag1 = 1;
        loop(i, 0, n, 1){
            if (a[i] != b[i]) flag1 = 0;
        }
        if (flag1) cout<<"maybe\n";
        else cout<<"unrated\n";
    }
    else cout<<"rated\n";
    return 0;
}