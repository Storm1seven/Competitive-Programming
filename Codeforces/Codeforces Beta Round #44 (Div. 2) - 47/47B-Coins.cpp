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
    vstr a(3);
    loop(i, 0, 3, 1){
        cin>>a[i];
        if (a[i][1] == '<') reverse(all(a[i]));
    }
    sort(all(a));
    ll x[3] = {};
    for(auto i:a) x[i[0]-'A']++;
    vchar ans(3);
    loop(i, 0, 3, 1){
        if (x[i] == 2) ans[2] = 'A'+i;
        else if (x[i] == 1) ans[1] = 'A'+i;
        else ans[0] = 'A'+i;
    }
    sll s;
    for(auto i:x) s.add(i);
    if (s.size() == 3){
        for(auto i:ans) cout<<i;
    }
    else cout<<"Impossible";
    return 0;
}