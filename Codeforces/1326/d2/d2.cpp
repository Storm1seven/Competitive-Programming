# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
using namespace std;
# define ll long long
// # define ll ll
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
string s, x, y;
ll lpp(string str){
    string rev="";
    ll m=str.size(),longestPalindromicPrefix=1;
    if(m==0 || m==1) return m; 
    for(ll i=m-1;i>=0;i--)
        rev+=str[i];
    str+="#";
    str+=rev;
    ll n=str.size(),l=0,r=0;
    vll z(n+4, 0);
    for(ll i=1;i<n;i++){
        if(i>r){
            l=i;
            r=i;
            while(r<n && str[r-l]==str[r])
                r++;
            z[i]=r-l;
            r--;
        }
        else{
            ll k=i-l;
            if(z[k]<r-i+1)
                z[i]=z[k];
            else{
                l=i;
                while(r<n && str[r-l]==str[r])
                    r++;
                z[i]=r-l;
                r--;
            }
        }
    }

    for(ll i=m+1;i<n;i++){
        if(2*z[i]>=2*m-i && z[i]>longestPalindromicPrefix)
            longestPalindromicPrefix=z[i];
    }
    return longestPalindromicPrefix;
}
string suffix(ll l, ll r){
    string val = "";
    string str = "";
    rloop(i, r, l-1, -1) str+=s[i];
    ll n = lpp(str);
    loop(i, 0, n, 1) val+=s[r-i];
    return val;
}
string prefix(ll l, ll r){
    string val = "";
    string str = "";
    loop(i, l, r+1, 1) str+=s[i];
    ll n = lpp(str);
    loop(i, 0, n, 1) val+=s[i+l];
    return val;
}
void getString(ll l, ll r){
    if (l > r) return;
    if (l == r){
        x+=s[l];
        return;
    }
    if (s[l] == s[r]){
        x+=s[l];
        y+=s[r];
        getString(l+1, r-1);
    }else{
        string p = suffix(l, r);
        string q = prefix(l, r);
        if (p.size() > q.size()) x+=p;
        else y+=q;
        return;
    }
}
void solve(){
    x = "";
    y = "";
    cin>>s;
    getString(0, s.size()-1);
    cout<<x;
    reverse(all(y));
    cout<<y<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    while(t--) solve();
    return 0;   
}