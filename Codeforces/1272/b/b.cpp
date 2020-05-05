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
    ll t; cin>>t;
    loop(i, 0, t, 1){
        string s; cin>>s;
        ll cntl = 0, cntr = 0, cntu = 0, cntd = 0;
        for(auto i:s){
            if (i == 'L') cntl++;
            else if (i == 'R') cntr++;
            else if (i == 'U') cntu++;
            else cntd++;
        }
        ll minh = min(cntl, cntr);
        ll minv = min(cntu, cntd);
        if (!minh and !minv){
            cout<<0<<endl<<endl;
        }
        else if (!minv){
            cout<<2<<endl;
            cout<<"LR"<<endl;
        }
        else if (!minh){
            cout<<2<<endl;
            cout<<"UD"<<endl;
        }
        else{
            cout<<2*minh + 2*minv<<endl;
            loop(i, 0, minh, 1) cout<<"L";
            loop(i, 0, minv, 1) cout<<"U";
            loop(i, 0, minh, 1) cout<<"R";
            loop(i, 0, minv, 1) cout<<"D";
            cout<<endl;
        }
    }
    return 0;
}
