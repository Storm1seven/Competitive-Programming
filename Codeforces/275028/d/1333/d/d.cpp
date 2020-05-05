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
    ll n, k; cin>>n>>k;
    string s; cin>>s;
    vvll swaps;
    ll count = 0;
    while(true){
        swaps.append(vll());
        loop(i, 0, n-1, 1){
            if (s[i] == 'R' and s[i+1] == 'L'){
                swaps.back().append(i);
                count++;
            }
        }
        if (swaps.back().size() == 0){
            swaps.popb();
            break;
        }
        for(auto i:swaps.back()) swap(s[i], s[i+1]);
    }
    if (swaps.size() > k || k > count){
        cout<<-1<<endl;
        return 0;
    }
    loop(i, 0, swaps.size(), 1){
        while (swaps[i].size() > 1 and k > swaps.size()){
            k--;
            cout<<1<<" "<<swaps[i].back()+1<<'\n';
            swaps[i].popb();
        }
        cout<<swaps[i].size()<<" ";
        for(auto j:swaps[i]) cout<<j+1<<" ";
        cout<<'\n';
    }
    return 0;
}
