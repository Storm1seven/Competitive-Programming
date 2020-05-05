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
ll mod = 998244353;
string infixToPostfix(string s){
    stack<char> st;
    string pf = "";
    for(auto i:s){
        if (i == '#') pf+='#';
        else if (i == '(') st.push('(');
        else if (i == ')'){
            while (st.top()!='('){
                pf+=st.top();
                st.pop();
            }
            st.pop();
        }
        else st.push(i);
    }
    return pf;
}
ll modInverse(ll a, ll m){ 
    ll m0 = m; 
    ll y = 0, x = 1; 
    if (m == 1) 
      return 0; 
    while (a > 1){ 
        ll q = a / m; 
        ll t = m; 
        m = a % m, a = t; 
        t = y; 
        y = x - q * y; 
        x = t; 
    } 
    if (x < 0) 
       x += m0; 
    return x; 
} 
vll opAnd(vll &a, vll &b){
    vll res(4);
    res[0] = ((a[0]+b[0] - (a[0]*b[0])%mod + mod)%mod + (a[2]*b[3])%mod + (a[3]*b[2])%mod)%mod;
    res[1] = (a[1]*b[1])%mod;
    res[2] = ((a[1]*b[2])%mod + (a[2]*b[1])%mod + (a[2]*b[2])%mod)%mod;
    res[3] = ((a[1]*b[3])%mod + (a[3]*b[1])%mod + (a[3]*b[3])%mod)%mod;
    return res;
}
vll opXor(vll &a, vll &b){
    vll res(4);
    res[0] = ((a[0]*b[0])%mod + (a[1]*b[1])%mod + (a[2]*b[2])%mod + (a[3]*b[3])%mod)%mod;
    res[1] = ((a[0]*b[1])%mod + (a[2]*b[3])%mod + (a[3]*b[2])%mod + (a[1]*b[0])%mod)%mod;
    res[2] = ((a[0]*b[2])%mod + (a[1]*b[3])%mod + (a[3]*b[1])%mod + (a[2]*b[0])%mod)%mod;
    res[3] = ((a[0]*b[3])%mod + (a[1]*b[2])%mod + (a[2]*b[1])%mod + (a[3]*b[0])%mod)%mod;
    return res;
}
vll opOr(vll &a, vll &b){
    vll res(4);
    res[0] = (a[0]*b[0])%mod;
    res[1] = ((a[1]+b[1] - (a[1]*b[1])%mod + mod)%mod + (a[2]*b[3])%mod + (a[3]*b[2])%mod)%mod;
    res[2] = ((a[0]*b[2])%mod + (a[2]*b[0])%mod + (a[2]*b[2])%mod)%mod;
    res[3] = ((a[0]*b[3])%mod + (a[3]*b[0])%mod + (a[3]*b[3])%mod)%mod;
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    vll init;
    loop(i, 0, 4, 1){
        init.append(modInverse(4, mod));
    }
    loop(_, 0, t, 1){
        string s; cin>>s;
        s = infixToPostfix(s);
        stack<vll> st;
        for(auto i:s){
            if (i == '#'){
                st.push(init);
            }else{
                if (i == '&'){
                    vll a = st.top();
                    st.pop();
                    vll b = st.top();
                    st.pop();
                    st.push(opAnd(a, b));
                }else if (i == '^'){
                    vll a = st.top();
                    st.pop();
                    vll b = st.top();
                    st.pop();
                    st.push(opXor(a, b));
                }else if (i == '|'){
                    vll a = st.top();
                    st.pop();
                    vll b = st.top();
                    st.pop();
                    st.push(opOr(a, b));
                }
            }
        }
        for(auto i:st.top()) cout<<i<<" ";
        cout<<endl;
    }
}