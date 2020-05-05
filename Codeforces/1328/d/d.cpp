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
    while(t--){
        ll n; cin>>n;
        vll a = vin(n);
        sll s;
        for(auto i:a) s.add(i);
        if (s.size()==1){
            cout<<1<<endl;
            loop(i, 0, n, 1) cout<<1<<' ';
            cout<<endl;
            continue;
        }
        if (n%2){
            vll ans(n, 0);
            ll index = -1;
            loop(i, 0, n, 1){
                if (a[i] == a[(i+1)%n]){
                    index = i;
                    break;
                }
            }
            if (index == -1){
                cout<<3<<endl;
                loop(i, 0, n-1, 1){
                    if (i%2) cout<<1<<" ";
                    else cout<<2<<' ';
                }
                cout<<3<<endl;
                continue;
            }
            ll i = 0;
            ll val = 1;
            cout<<2<<endl;
            while (i < n){
                if (i == index){
                    cout<<val<<" ";
                    i++;
                    if (i == n) break;
                    cout<<val<<" ";
                    val = 3-val;
                    i++;
                }else{
                    cout<<val<<" ";
                    val = 3-val;
                    i++;
                }
            }
            cout<<endl;
        }else{
            cout<<2<<endl;
            loop(i, 0, n, 1){
                if (i%2) cout<<1<<" ";
                else cout<<2<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
