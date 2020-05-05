# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// #include<prettyprint.hpp>
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
#define MAXN 100001
ll spf[MAXN];
vector<pair<ll, ll> > SqFactors[MAXN];
ll power(ll x, unsigned ll y){ 
    ll res = 1; 
    while (y > 0){ 
        if (y & 1) res = res*x; 
        y = y>>1;
        x = x*x;
    } 
    return res; 
}
void sieve(){ 
	spf[1] = 1; 
	for (ll i=2; i<MAXN; i++) spf[i] = i; 
	for (ll i=4; i<MAXN; i+=2) spf[i] = 2; 
	for (ll i=3; i*i<MAXN; i++){  
		if (spf[i] == i){ 
			for (ll j=i*i; j<MAXN; j+=i) if (spf[j]==j) spf[j] = i; 
		} 
	} 
}
void update(vector<ll> &counter, map<ll, ll> &pf, vector<ll> &p, ll carry, ll pos){
    if (!carry or pos==-1) return;
    counter[pos]+=1;
    carry = counter[pos]/pf[p[pos]];
    counter[pos]%=(pf[p[pos]]+1);
    update(counter, pf, p, carry, pos-1);
}
vector<pair<ll, ll> > getSqPF(ll x){ 
	map<ll, ll> pf;
    ll n = x;
    if (x == 1) pf[1] = 1;
	while (x != 1){
		pf[spf[x]]+=2; 
		x = x / spf[x]; 
	}
    vector<ll> p;
    ll total = 1;
    for(auto i:pf){
        p.append(i.first);
        total*=(i.second+1);
    }
    vector<ll> counter(pf.size(), 0);
    set<pair<ll, ll> > f;
    loop(i, 0, total, 1){
        ll num1 = 1;
        loop(j, 0, pf.size(), 1) num1*=power(p[j], counter[j]);
        ll num2 = power(n, 2)/num1;
        if (num1 < MAXN and num2 < MAXN) f.add(make_pair((ll) num1, (ll) num2));
        update(counter, pf, p, 1, pf.size()-1);
    }
    return vector<pair<ll, ll> >(f.begin(), f.end());
}
void solve(){
    ll n, m; cin>>n>>m;
    ll x[n], y[m], visXN[MAXN], visYN[MAXN], visXP[MAXN], visYP[MAXN];
    ll zeroflagm = 0, zeroflagn = 0;
    loop(i, 0, n, 1){
        cin>>x[i];
        if (x[i]==0) zeroflagn = 1;
        if (x[i] < 0) visXN[abs(x[i])] = 1;
        else if (x[i] > 0) visXP[x[i]] = 1;
    }
    loop(i, 0, m, 1){
        cin>>y[i];
        if (!y[i]) zeroflagm = 1;
        if (y[i] < 0) visYN[abs(y[i])] = 1;
        else if (y[i] > 0) visYP[y[i]] = 1;
    }
    ll ans = zeroflagn*m*(n-1) + zeroflagm*(m-1)*n;
    for(auto i:x){
        ll val = abs(i);
        if (!val) continue;
        for(auto j: SqFactors[val]){
            if (visYN[j.first] and visYP[j.second]) ans++;
        }
    }
    for(auto i:y){
        ll val = abs(i);
        if (!val) continue;
        for(auto j: SqFactors[val]){
            if (visXN[j.first] and visXP[j.second]) ans++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    // ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sieve();
    loop(i, 1, MAXN, 1) SqFactors[i] = getSqPF(i);
    ll t; cin>>t;
    loop(i, 0, t, 1) solve();
    return 0;
}