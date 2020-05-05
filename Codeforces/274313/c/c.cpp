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
    ll n, m; cin>>n>>m;
    vll a = vin(n);
    ll g1 = m, g2 = 0;
    ll gi = 0, gi2 = 0;
    ll time = 0;
    ll flag = 0;
    while (gi < n){
        if (g1 == m){
            time+=1+a[gi]/m;
            g2 = a[gi]%m;
            g1 -= g2;
            gi++;
        }else{
            flag = 1;
            if (a[gi] >= g1){
                time++;
                a[gi]-=g1;
                g1 = m;
                g2 = 0;
            }else{
                time++;
                g2+=a[gi];
                g1-=a[gi];
                gi++;
                if (g2 == m) swap(g1, g2);
            }
        }
    }
    cout<<time+flag<<endl;
    return 0;
}
