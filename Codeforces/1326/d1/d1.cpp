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
ll lpp(string s){
    string rev="",str=s;
    int m=s.size(),longestPalindromicPrefix=1;
    if(m==0 || m==1)    longestPalindromicPrefix=m; 
    for(int i=m-1;i>=0;i--)
        rev+=s[i];
    s+='#';
    s+=rev;
    int n=s.size(),z[n+4],l=0,r=0;
    for(int i=1;i<n;i++){
        if(i>r){
            l=r=i;
            while(r<n && s[r-l]==s[r])
                r++;
            z[i]=r-l,r--;
        }
        else{
            int k=i-l;
            if(z[k]<r-i+1)
                z[i]=z[k];
            else{
                l=i;
                while(r<n && s[r-l]==s[r])
                    r++;
                z[i]=r-l,r--;
            }
        }
    }

    for(int i=m+1;i<n;i++){
        if(2*z[i]>=2*m-i && z[i]>longestPalindromicPrefix)
            longestPalindromicPrefix=z[i];
    }
    return longestPalindromicPrefix;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    cout<<lpp(s)<<endl;
    return 0;
}
