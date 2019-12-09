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
# define append push_bac
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
        string a, b;
        cin>>a>>b;
        if (a == "0"){
            cout<<1<<endl;
        }
        else if (b == "0"){
            cout<<0<<endl;
        }
        else{
            cout<<"YES"<<endl;
            ll ai = a.size()-1, bi = b.size()-1, ci = 0;
            ll count = 0;
            while (ai > 0 and bi > 0){
                cout<<"HI"<<endl;
                if (a[ai]-'0' + b[bi]-'0' + ci >= 2){
                    ci=1;
                    if (a[ai]-'0' + b[bi]-'0' + ci == 2){
                        count++;
                    }
                }
                else{
                    ci = 0;
                }
                ai-=1;
                bi-=1;
            }
            cout<<count+ci<<endl;
        }
    }
    return 0;
}