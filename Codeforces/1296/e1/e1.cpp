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
ll n;
vvll d;
vll colorArr;
bool isBipartiteUtil(ll src){ 
    colorArr[src] = 1; 
    queue <ll> q; 
    q.push(src); 
    while (!q.empty()){ 
        ll u = q.front(); 
        q.pop(); 
        for(auto v:d[u]){
            if (colorArr[v] == -1){  
                colorArr[v] = 1 - colorArr[u]; 
                q.push(v); 
            } 
            else if (colorArr[v] == colorArr[u]) 
                return false; 
        } 
    } 
    return true; 
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin>>n;
    d.resize(26);
    colorArr.resize(n, -1);
    string s; cin>>s;
    map<char, vll> m;
    loop(i, 0, n, 1){
        loop(j, 1, 26, 1){
            if (s[i]+j > 'z') break;
            loop(k, 0, m[s[i]+j].size(), 1){
                d[s[i]-'a'].append(m[s[i]+j][k]);
                d[s[m[s[i]+j][k]]-'a'].append(i);
            }
        }
        m[s[i]].append(i);
    }
    loop(i, 0, n, 1){
        if (colorArr[i] == -1){
            if(!isBipartiteUtil(i)){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    loop(i, 0, n, 1) cout<<colorArr[i];
    cout<<endl;
    return 0;
}
