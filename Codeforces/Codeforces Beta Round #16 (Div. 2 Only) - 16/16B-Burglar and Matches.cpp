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
bool sortbysecdesc(const pll &a, 
                   const pll &b) 
{ 
       return a.second>b.second; 
} 
int main(){
    ios_base::sync_with_stdio(false);
    ll n, m; cin>>n>>m;
    vpll a;
    ll x, y;
    loop(i, 0, m, 1){
        cin>>x>>y;
        a.append(make_pair(x, y));
    }
    sort(all(a), sortbysecdesc);
    ll total = 0, num = 0;
    ll i = 0;
    while (num < n && i<m){
        if (num+a[i].first <= n){
            num+=a[i].first;
            total+=a[i].first*a[i].second;
        }
        else{
            total+=(n-num)*a[i].second;
            num = n;
        }
        i++;
    }
    cout<<total<<"\n";
    return 0;
}