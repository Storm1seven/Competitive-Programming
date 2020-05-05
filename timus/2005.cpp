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
    int a[4][5] = {{1, 2, 3, 4, 5}, {1, 3, 2, 4, 5}, {1, 3, 4, 2, 5}, {1, 4, 3, 2, 5}};
    int dist[5][5];
    loop(i, 0, 5, 1) loop(j, 0, 5, 1) cin>>dist[i][j];
    int minDist = 50000;
    int minSeq = -1;
    loop(i, 0, 4, 1){
        int currDist = 0;
        loop(j, 0, 4, 1){
            currDist+=dist[a[i][j]-1][a[i][j+1]-1];
        }
        if (currDist < minDist){
            minDist = currDist;
            minSeq = i;
        }
    }
    cout<<minDist<<endl;
    loop(i, 0, 5, 1) cout<<a[minSeq][i]<<" ";
    cout<<endl;
    return 0;
}