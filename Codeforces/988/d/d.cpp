# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
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
    ll n; cin>>n;
    vll a = vin(n);
    sll s;
    for(auto i:a) s.add(i);
    loop(i, 0, n, 1){
        loop(j, 0, 31, 1){
            ll delta = 1<<j;
            if (s.find(a[i]-delta) != s.end() and s.find(a[i]+delta) != s.end()){
                cout<<3<<endl;
                cout<<a[i]-delta<<" "<<a[i]<<" "<<a[i]+delta<<endl;
                return 0;
            }
        }
    }
    loop(i, 0, n, 1){
        loop(j, 0, 31, 1){
            ll delta = 1<<j;
            if (s.find(a[i]-delta) != s.end()){
                cout<<2<<endl;
                cout<<a[i]-delta<<" "<<a[i]<<endl;
                return 0;
            }else if(s.find(a[i]+delta)!=s.end()){
                cout<<2<<endl;
                cout<<a[i]<<" "<<a[i]+delta<<endl;
                return 0;
            }
        }
    }
    cout<<1<<endl;
    cout<<a[0]<<endl;
    return 0;
}
