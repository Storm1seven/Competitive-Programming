/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll> >
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll> >
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
    ll n, m, k, t, x, y;
    cin>>n>>m>>k>>t;
    vpll p;
    loop(i, 0, k, 1){
        cin>>x>>y;
        p.append(make_pair(x, y));
    }
    sort(all(p));
    ll flag = 0, count = 0;
    loop(j, 0, t, 1){
        flag = 0;
        count = 0;
        cin>>x>>y;
        for (auto i:p){
            if (i.first < x) count++;
            else if (i.first == x && i.second < y) count++;
            else if (i.first == x && i.second == y){
                flag = 1;
                break;
            }
            else break;
        }
        if (flag) cout<<"Waste\n";
        else{
            if (((m*(x-1)+(y-1)) - count)%3 == 0) cout<<"Carrots\n";
            else if (((m*(x-1)+(y-1)) - count)%3 == 1) cout<<"Kiwis\n";
            else cout<<"Grapes\n";
        }
    }
    return 0;
}