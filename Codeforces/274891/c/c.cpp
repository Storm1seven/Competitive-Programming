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
    if (m%2){
        ll l = (m+1)/2;
        ll r = l;
        ll count = 0;
        vll ans;
        while (count!=n){
            if (l == r){
                ans.append(l);
                l--;
                r++;
                count++;
                if (l == 0) break;
            }else{
                ans.append(l);
                l--;
                count++;
                if (count==n) break;
                ans.append(r);
                r++;
                if (l == 0) break;
            }
        }
        loop(i, 0, n, 1){
            cout<<ans[i%ans.size()]<<endl;
        }
    }else{
        ll l = m/2;
        ll r = l+1;
        ll count = 0;
        vll ans;
        while (count!=n){
            ans.append(l);
            l--;
            count++;
            if (count==n) break;
            ans.append(r);
            r++;
            if (l == 0) break;
        }
        loop(i, 0, n, 1){
            cout<<ans[i%ans.size()]<<endl;
        }
    }
    return 0;
}
