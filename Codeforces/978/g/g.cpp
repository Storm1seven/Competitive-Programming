# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
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
    set<vll> z;
    map<ll, vvll> a;
    vll ans(n, 0);
    ll s, d, c;
    loop(i, 0, m, 1){
        cin>>s>>d>>c;
        vll temp;
        temp.append(d-1);
        temp.append(c);
        temp.append(i);
        a[s-1].append(temp);
    }
    ll j = 0;
    loop(i, 0, n, 1){
        for(auto p:a[i]) z.add(p);
        if (ans[i]) continue;
        if (z.size() == 0) continue;
        auto x = *z.begin();
        if (x[1] == 0){
            z.erase(x);
            if (ans[x[0]]){
                cout<<-1<<endl;
                return 0;
            }
            ans[x[0]] = m+1;
        }
        if (z.size() == 0) continue;
        x = *z.begin(); 
        ans[i] = x[2]+1;
        z.erase(x);
        x[1]--;
        if (x[1]) z.add(x);
        else{
            if (ans[x[0]]){
                cout<<-1<<endl;
                return 0;
            }
            ans[x[0]] = m+1;
        }
    }
    if (z.size()) cout<<-1<<endl;
    else for (auto i:ans) cout<<i<<" ";
    cout<<endl;
    return 0;
}
