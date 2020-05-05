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
sll factors;
void divisors(ll n){
    ll i = 1;
    while (i <= sqrt(n)){
        if (n%i == 0){
            if (i <= 40000 and n/i <= 40000){ 
                factors.add(i);
                factors.add(n/i);
            }
        }
        i++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, m, k;
    cin>>n>>m>>k;
    vll a = vin(n);
    vll b = vin(m);
    divisors(k);
    vll za(1, 0), zb(1, 0);
    for(auto i:a) za.append(za.back()+i);
    for(auto i:b) zb.append(zb.back()+i);
    mll countA, countB;
    for(auto i:factors){
        loop(j, 0, n-i+1, 1){
            if (za[j+i] - za[j] == i) countA[i]++;
        }
        loop(j, 0, m-i+1, 1){
            if (zb[j+i] - zb[j] == i) countB[i]++;
        }
    }
    ll ans = 0;
    for(auto i:factors){
        ans+=countA[i]*countB[k/i];
    }
    cout<<ans<<"\n";
    return 0;
}