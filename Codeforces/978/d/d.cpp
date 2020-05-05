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
    if (n <= 2){
        cout<<0<<endl;
        return 0;
    }
    ll ans = 2*n;
    ll count;
    loop(i, -1, 2, 1){
        loop(j, -1, 2, 1){
            count = abs(i)+abs(j);
            ll first = a[0]+i;
            ll second = a[1]+j;
            ll diff = second-first;
            loop(k, 2, n, 1){
                if (abs(a[k]-(first+k*diff)) > 1) count = 3*n;
                else if (abs(a[k]-(first+k*diff)) == 1) count+=1;
            }
            ans = min(ans, count);
        }
    }
    if (ans == 2*n) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}
