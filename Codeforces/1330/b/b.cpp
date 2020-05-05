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
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vll a = vin(n);
        vll count(n+1, 0);
        sll left, right;
        loop(i, 0, n, 1){
            count[a[i]]++;
            right.add(a[i]);
        }
        ll flag = 0;
        ll l1 = 0, l2 = 0;
        vpll ans;
        loop(i, 0, n, 1){
            count[a[i]]--;
            left.add(a[i]);
            if (!count[a[i]]) right.erase(a[i]);
            if (left.size() == 0 or right.size() == 0) continue;
            auto ptr1 = left.end();
            ptr1--;
            auto ptr2 = right.end();
            ptr2--;
            if ((left.size() == i+1 and *ptr1 == i+1) and (right.size() == n-1-i and n-1-i == *ptr2)){
                ans.append(make_pair(left.size(), n-left.size()));
            }
        }
        cout<<ans.size()<<endl;
        loop(i, 0, ans.size(), 1){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
    return 0;
}
