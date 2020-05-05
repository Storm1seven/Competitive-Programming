# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, block;
vector<ll> a;
unordered_map<ll, ll> s;
inline ll gilbertOrder(ll x, ll y, ll pow, ll rotate) {
	if (pow == 0) {
		return 0;
	}
	ll hpow = 1 << (pow-1);
	ll seg = (x < hpow) ? (
		(y < hpow) ? 0 : 3
	) : (
		(y < hpow) ? 1 : 2
	);
	seg = (seg + rotate) & 3;
	const ll rotateDelta[4] = {3, 0, 0, 1};
	ll nx = x & (x ^ hpow), ny = y & (y ^ hpow);
	ll nrot = (rotate + rotateDelta[seg]) & 3;
	ll subSquareSize = int64_t(1) << (2*pow - 2);
	ll ans = seg * subSquareSize;
	ll add = gilbertOrder(nx, ny, pow-1, nrot);
	ans += (seg == 1 || seg == 2) ? add : (subSquareSize - add - 1);
	return ans;
}
struct query{
    ll l, r, val, idx, ord;
    bool operator< (const query& other) const{
        return ord < other.ord;
    }
};
void add(ll pos){
    s[a[pos]]++;
}
void remove(ll pos){
    s[a[pos]]--;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    a.resize(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    block = ceil(sqrt(n));
    ll m; cin >> m;
    vector<ll> ans(m);
    vector<query> q(m);
    for(ll i = 0; i < m; i++){
        cin >> q[i].l >> q[i].r >> q[i].val;
        q[i].l--, q[i].r--;
        q[i].idx = i;
        q[i].ord = gilbertOrder(q[i].l, q[i].r, 21, 0);
    }
    sort(q.begin(), q.end());
    ll l = 0, r = -1;
    for(auto i:q){
        while (l < i.l) remove(l++);
        while (l > i.l) add(--l);
        while (r > i.r) remove(r--);
        while (r < i.r) add(++r);
        if (s[i.val] > 0) ans[i.idx] = 1;
        else ans[i.idx] = 0;
    }
    for(auto i:ans) cout << i;
    return 0;
}