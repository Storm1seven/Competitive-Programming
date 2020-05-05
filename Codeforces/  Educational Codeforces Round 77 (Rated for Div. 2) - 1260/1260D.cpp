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
vvll d;
vll vis;
void dfs(ll v){
    vis[v] = 1;
    for(auto i:d[v]){
        if (!vis[i]) dfs(i);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin>>n;
    d.resize(n);
    vis.resize(n, 0);
    vll l(n), r(n);
    vpll z;
    loop(i, 0, n, 1){
        cin>>l[i]>>r[i];
        z.append(make_pair(l[i], i));
    }
    set<pll> s;
    ll count = 0;
    sort(all(z));
    ll i, j;
    for(auto seg:z){
        i = seg.second;
        auto p = s.begin();
        while (p!=s.end()){
            j = p->second;
            if (r[j] > r[i]) break;
            if (r[j] < l[i]){
                auto del = p;
                p++;
                s.erase(*del);
            }
            else{
                d[i].append(j);
                d[j].append(i);
                count+=1;
                if (count >= n){
                    cout<<"NO"<<endl;
                    return 0;
                }
                p++;
            }
        }
        s.add(make_pair(r[i], i));
    }
    if (count!=n-1){
        cout<<"NO"<<endl;
        return 0;
    }
    dfs(0);
    if (find(all(vis), 0) != vis.end()) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}