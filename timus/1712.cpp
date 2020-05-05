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
vector<vchar> rotate90(vector<vchar> &a){
    vector<vchar> z(4, vchar(4));
    loop(i, 0, 4, 1){
        loop(j, 0, 4, 1){
            z[j][3-i] = a[i][j];
        }
    }
    return z;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    vector<vchar> a(4);
    vector<vchar> z(4);
    char c;
    loop(i, 0, 4, 1) loop(j, 0, 4, 1){
        cin>>c;
        a[i].append(c);
    }
    loop(i, 0, 4, 1) loop(j, 0, 4, 1){
        cin>>c;
        z[i].append(c);
    }
    string ans;
    loop(_, 0, 4, 1){
        loop(i, 0, 4, 1){
            loop(j, 0, 4, 1){
                if (a[i][j] == 'X') ans+=z[i][j];
            }
        }
        a = rotate90(a);
    }
    cout<<ans<<endl;
    return 0;
}