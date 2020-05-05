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
    string s; cin>>s;
    string a, b; cin>>a>>b;
    map<char, ll> sc, ac, bc;
    for(auto i:s) sc[i]++;
    for(auto i:a) ac[i]++;
    for(auto i:b) bc[i]++;
    ll arep = -1, brep = -1, aval = 1000*1000, bval = 1000*1000;
    for(auto i:ac) if (i.second) aval = min(aval, sc[i.first]/i.second);
    loop(i, 0, aval+1, 1){
        bval = 1000*1000;
        for(auto j:bc){
            if (j.second) bval = min(bval, (sc[j.first]-i*ac[j.first])/j.second);
        }
        if (i+bval > arep+brep){
            arep = i;
            brep = bval;
        }
    }
    loop(i, 0, arep, 1) cout<<a;
    loop(i, 0, brep, 1) cout<<b;
    for(auto i:sc){
        loop(j, 0, i.second-arep*ac[i.first]-brep*bc[i.first], 1) cout<<i.first;
    }
    cout<<endl;
    return 0;
}
