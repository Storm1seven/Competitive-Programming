#include <bits/stdc++.h>
using namespace std;
#define  pb     push_back
#define  MOD    1000000007
#define  pp     pop_back
#define  MAXN      1000001
#define  mp     make_pair
#define  endl    '\n'
#define  ff     first
#define  ss     second
#define  mapcl    map<char,ll>
#define  mapll    map<ll,ll>
#define  pll    pair<ll,ll>
#define  cmp    complex<double>
#define  pi     3.141592653589793238462643383279502884197169399375105820974944592307816406286 
#define  inf    1000
#define  flush    fflush(stdout)
#define  vll    vector<ll>
#define  all(v)    v.begin(),v.end()
#define  fr(i,z,n)   for(ll i=z;i<n;i++)
#define  sqrt    sqrtl
#define  cbrt    cbrtl
#define  ll     long long
#define  ld     long double
# define INF 1000000000000
bool   coll(pll p1,pll p2,pll p3)  {if((p3.ss-p2.ss)*(p2.ff-p1.ff)==(p2.ss-p1.ss)*(p3.ff-p2.ff))return true;else return false;}
void  print(auto x)     {cout<<x<<endl;}
void   pv(vector<auto> v)    {for(ll i=0;i<(ll)v.size();i++)cout<<v[i]<<" ";cout<<endl;}
void   pvsl(vector<auto> v)   {for(ll i=0;i<(ll)v.size();i++)cout<<v[i]<<" ";}
void   in(vector<auto> &v, ll n)  {v.resize(n);for(ll i=0;i<n;i++)cin>>v[i];}
void   sortv(vector<auto> &v)   {sort(v.begin(),v.end());}
void   fast()       {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
typedef pair<ll, ll> iPair;
ll maxi(ll a,ll b){
 if (a > b){
  return a;
 }
 return b;
}
ll mini(ll a,ll b){
 if (a > b){
  return b;
 }
 return a;
}
ll n,m,fn,sn;
vector<pair<ll,ll> > adj[100000+10];
//bool included = false;
ll parent[100000+10];
void primMST() {
 priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
 ll src = fn;
 vector<ll> key(n+1, INF);
 vector<ll> inMST(n+1, false); 
 pq.push(make_pair(0, src));
 key[src] = 0;
 while (!pq.empty()) { 
  ll u = pq.top().second;
  pq.pop();
  inMST[u] = true;
  for (auto i = adj[u].begin(); i != adj[u].end(); ++i) { 
   ll v = (*i).first;
   ll weight = (*i).second;
   if (inMST[v] == false && key[v] > weight) { 
    key[v] = weight;
    //cout << "inside" << endl;
    pq.push(make_pair(key[v], v));
    /*if ((u == fn && v == sn) || (u == sn && v == fn)){
     included = true;
    }*/
    parent[v] = u;
   }
  }
 }
 } 
int main(){
 cin >> n >> m;
 for (ll i=0;i<m;i++){
  ll a,b,w;
  cin >> a >> b >> w;
  if (i == 0){
   fn = a;
   sn = b;
   w = 1000000000;
  }
  adj[a].pb(mp(b,w));
  adj[b].pb(mp(a,w));
 }
 primMST();
 if (parent[sn] == fn){
  //cout << "SHIT" << endl;
  cout << 1000000000 << endl;
 }
 else{
  vector<pair<ll,ll> > data[n+1];
  for (ll i=1;i<=n;i++){
   for (auto it=adj[i].begin();it!=adj[i].end();it++){
    ll v = (*it).ff;
    if (parent[v] == i){
     data[i].pb(mp(v,(*it).ss));
    }
   }
  }
  data[sn].pb(mp(fn,0));
  ll vis[n+1];
  memset(vis,false,sizeof(vis));
  stack<pair<ll,ll> >s;
  s.push(mp(fn,0));
  vis[fn] = true;
  while (s.size() > 0){
   pair<ll,ll> tmp = s.top();
   s.pop();
   //cout << tmp.ff << " " << tmp.ss  << endl;
   for (ll i=0;i<(ll)data[tmp.ff].size();i++){
    if (!vis[data[tmp.ff][i].ff]){
     vis[data[tmp.ff][i].ff] = true;
     s.push(mp(data[tmp.ff][i].ff,maxi(data[tmp.ff][i].ss,tmp.ss)));
    }
    else{
     cout << maxi(tmp.ss,data[tmp.ff][i].ss) << endl;
     return 0;
    }
   }
  }
 }
}