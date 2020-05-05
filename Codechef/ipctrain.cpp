# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
// # define ll int
# define vll vector<ll>
# define vvll vector<vector<ll> >
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll> >
# define mll map<ll, ll>
# define sll set<ll>
# define usll unordered_set<ll>
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
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    loop(_, 0, t, 1){
        ll n, d; cin>>n>>d;
        vvll a(n, vll(3, 0));
        ll total = 0;
        loop(i, 0, n, 1){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
            total+=a[i][1]*a[i][2];
        }
        sort(all(a));
        ll i = 0, day = 1;
        multiset<pll> s;
        ll sum = 0;
        while (day <= d){
            if (i < n and a[i][0] == day){
                s.add(make_pair(a[i][2], a[i][1]));
                i++;
            }
            day++;
            if (!s.size()) continue;
            auto itr = s.end();
            itr--;
            pll x = *itr;
            s.erase(x);
            x.second-=1;
            total-=x.first;
            if (x.second) s.add(x);
        }
        cout<<total<<endl;
    }
    return 0;
}