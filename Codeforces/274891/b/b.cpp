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
    map<string, ll> m;
    m["C"] = 1;
    m["C#"] = 2;
    m["D"] = 3;
    m["D#"] = 4;
    m["E"] = 5;
    m["F"] = 6;
    m["F#"] = 7;
    m["G"] = 8;
    m["G#"] = 9;
    m["A"] = 10;
    m["B"] = 11;
    m["H"] = 12;
    vstr a;
    string x, y, z; cin>>x>>y>>z;
    a.append(x);
    a.append(y);
    a.append(z);
    sort(all(a));
    do {
        ll f = (m[a[1]] - m[a[0]]+12)%12;
        ll s = (m[a[2]] - m[a[1]]+12)%12;
        if (f == 4 and s == 3){
            cout<<"major"<<endl;
            return 0;
        }else if (f == 3 and s == 4){
            cout<<"minor"<<endl;
            return 0;
        }
    } while (next_permutation(all(a)));
    cout<<"strange"<<endl;
    return 0;
}
