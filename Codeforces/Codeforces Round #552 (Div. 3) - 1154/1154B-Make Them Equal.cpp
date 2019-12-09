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
int smallestDivisor(int n) { 
    if (n % 2 == 0) 
        return 2;
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
    return n; 
}
int main(){
    ios_base::sync_with_stdio(false);
    ll n, x; cin>>n;
    sll s;
    loop(i, 0, n, 1){
        cin>>x;
        s.add(x);
    }
    vll v;
    for(auto i:s) v.append(i);
    if (v.size() <= 3){
        if (v.size() == 1) cout<<"0\n";
        else if (v.size() == 2){
            ll ans = abs(v[0] - v[1]);
            if (ans%2 == 0) ans/=2;
            cout<<ans<<"\n";
        }
        else{
            sort(all(v));
            if (v[1] - v[0] == v[2] - v[1]){
                cout<<v[1]-v[0]<<"\n";
            }
            else cout<<"-1\n";
        }
    }
    else cout<<"-1\n";
    return 0;
}