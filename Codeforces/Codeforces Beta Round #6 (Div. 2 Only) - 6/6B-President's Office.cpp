/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll>>
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll>>
# define mll map<ll, ll>
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
vll vin(ll n){vll a(n);loop(i, 0, n, 1) cin>>a[i];return a;}
ll intin() {ll n; cin>>n; return n;}
char charin(){char a; cin>>a; return a;}
string strin(){string s; cin>>s; return s;}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n = intin();
    ll m = intin();
    char p = charin();
    vstr a(n);
    loop(i, 0, n, 1) cin>>a[i];
    schar s;
    loop(i, 0, n, 1){
        loop(j, 0, m, 1){
            if (a[i][j] == p){
                if (0<=i-1 && a[i-1][j] != '.') s.add(a[i-1][j]);
                if (0<=j-1 && a[i][j-1] != '.') s.add(a[i][j-1]);
                if (i+1<n && a[i+1][j] != '.') s.add(a[i+1][j]);
                if (j+1<m && a[i][j+1] != '.') s.add(a[i][j+1]);
            }
        }
    }
    cout<<s.size()-(find(all(s), p)!=s.end())<<"\n";
    return 0;
}