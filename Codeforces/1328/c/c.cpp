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
    loop(_, 0, t, 1){
        ll n; cin>>n;
        string s; cin>>s;
        string x = "1", y = "1";
        ll i = 1, flag = 0; 
        while (i < n){
            if (s[i] == '0'){
                x+='0';
                y+='0';
            }else if(s[i] == '2'){
                x+='1';
                y+='1';
            }else{
                x+='1';
                y+='0';
                flag = 1;
                i++;
                break;
            }
            i++;
        }
        while (i < n){
            if (s[i] == '0'){
                x+='0';
                y+='0';
            }else if(s[i] == '2'){
                x+='0';
                y+='2';
            }else{
                x+='0';
                y+='1';
            }
            i++;
        }
        cout<<x<<endl<<y<<endl;
    }
    return 0;
}
