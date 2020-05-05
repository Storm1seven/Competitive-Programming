#include <bits/stdc++.h>
using namespace std;
#define 	pb 				push_back
#define 	MOD 			1000000007
#define 	pp 				pop_back
#define 	MAXN   			1000001
#define 	mp 				make_pair
#define 	endl 			'\n'
#define 	ff 				first
#define 	ss 				second
#define 	mapcl 			map<char,ll>
#define 	mapll 			map<ll,ll>
#define 	pll 			pair<ll,ll>
#define 	cmp 			complex<double>
#define 	pi 				3.141592653589793238462643383279502884197169399375105820974944592307816406286 
#define 	inf 			1000
#define 	flush 			fflush(stdout)
#define 	vll 			vector<ll>
#define 	all(v) 			v.begin(),v.end()
#define 	fr(i,z,n) 		for(ll i=z;i<n;i++)
#define 	sqrt 			sqrtl
#define 	cbrt 			cbrtl
#define		ll 				long long
#define 	ld 				long double
bool 		coll(pll p1,pll p2,pll p3)		{if((p3.ss-p2.ss)*(p2.ff-p1.ff)==(p2.ss-p1.ss)*(p3.ff-p2.ff))return true;else return false;}
// void		print(auto x)					{cout<<x<<endl;}
// void 		pv(vector<auto> v)				{for(ll i=0;i<(ll)v.size();i++)cout<<v[i]<<" ";cout<<endl;}
// void 		pvsl(vector<auto> v)			{for(ll i=0;i<(ll)v.size();i++)cout<<v[i]<<" ";}
// void 		in(vector<auto> &v, ll n)		{v.resize(n);for(ll i=0;i<n;i++)cin>>v[i];}
// void 		sortv(vector<auto> &v)			{sort(v.begin(),v.end());}
void 		fast()							{ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
ll maxi(ll a, ll b){ 
	if (a > b)
		return a;
	return b;
}
ll mini(ll a, ll b){
	if (a > b)
		return b;
	return a;
}

bool check(string a){
	for (ll i=0;i<(ll)a.size();i++){
		if (a[i] == '1'){
			return false;
		}
	}
	return true;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
		string a, b;
		cin >> a >> b;
		if (check(b)){
			cout << 0 << endl;
			continue;
		}
        else if(check(a)){
            cout<<1<<endl;
            continue;
        }
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		while (a.size() != b.size()){
			if (a.size() > b.size()){
				b += '0';
			}
			else{
				a += '0';
			}
		}
		a += '0';
		b += '0';
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		ll lzero = 0;
		ll ans = -1;
		for (ll i=1;i<(ll)b.size();i++){
			if (b[i] == '1' && a[i] == '1'){
				ans = maxi(ans, i - lzero + 1);
				lzero = i;
			}
			else if (a[i] == '0' && b[i] == '0'){
				lzero = i;
			}
		}
        if (ans == -1) cout<<1<<endl;
        else cout<<ans<<endl;
	}
	return 0;
}