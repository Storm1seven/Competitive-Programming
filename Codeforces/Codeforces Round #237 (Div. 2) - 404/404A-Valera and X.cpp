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
    ll n; cin>>n;
    string s;
    vstr a;
    loop(i, 0, n, 1){
        cin>>s;
        a.append(s);
    }
    char d, nd;
    d = a[0][0];
    nd = a[0][1];
    int flag = 1;
    loop(i, 0, n, 1){
        if (a[i][i] != d) flag = 0;
        if (a[i][n-1-i] != d) flag = 0;
    }
    loop(i, 0, n, 1){
        loop(j, 0, n, 1){
            if (i!=j && i!=n-1-j) if (a[i][j]!=nd) flag = 0; 
        }
    }
    if (flag && d!=nd) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}