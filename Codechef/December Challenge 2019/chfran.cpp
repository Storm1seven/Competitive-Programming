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
ll n;
void update(vll& D, ll l, ll r, ll x) { 
    D[l] += x; 
    D[r + 1] -= x; 
}
void calcArray(vll& A, vll& D) { 
    for (int i = 0; i < A.size(); i++) { 
        if (i == 0) 
            A[i] = D[i]; 
        else
            A[i] = D[i] + A[i - 1]; 
    } 
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    loop(i, 0, t, 1){
        cin>>n;
        vpll a;
        ll l, r;
        loop(i, 0, n, 1){
            cin>>l>>r;
            a.append(make_pair(l, r));
        }
        sort(all(a));
        vll x;
        loop(i, 0, n, 1) x.append(a[i].first);
        vll::iterator upper;
        ll upperbound;
        vll d(n+1, 0);
        bool flag = false;
        loop(i, 0, n, 1){
            upper = upper_bound(all(x), a[i].second);
            upperbound = upper - x.begin();
            if (!d[i]) flag = true;
            update(d, i, i, upperbound-i-1);
            update(d, i+1, upperbound-1, 1);
        }
        vll z(n, 0);
        calcArray(z, d);
        ll ans = 10000000000;
        for(auto i:z){
            ans = min(ans, i);
        }
        if (ans == n-1){
            cout<<-1<<endl;
        }
        else if(flag){
            cout<<0<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}