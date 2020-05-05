# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, t, val = 0;
ll a[200005], cnt[1000*1000+10];
ll block;
struct query{
    ll l, r, idx;
    bool operator<(const query &other) const{
        return make_pair(l/block, r) < make_pair(other.l/block, other.r);
    }
};
void add(ll x){
    val+=a[x]*(2*cnt[a[x]]+1);
    cnt[a[x]]++;
}
void remove(ll x){
    val-=a[x]*(2*cnt[a[x]]-1);
    cnt[a[x]]--;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> t;
    block = floor(sqrt(n));
    for(ll i = 0; i < n; i++) cin >> a[i];
    query q[t];
    for(ll i = 0; i < t; i++){
        cin >> q[i].l >> q[i].r;
        q[i].l--;
        q[i].r--;
        q[i].idx = i;
    }
    sort(q, q+t);
    ll ans[t];
    ll l = 0, r = -1;
    for(auto i:q){
        while (l < i.l) remove(l++);
        while (l > i.l) add(--l);
        while (r < i.r) add(++r);
        while (r > i.r) remove(r--);
        ans[i.idx] = val;
    }
    for(auto i:ans) cout << i << '\n';
    return 0;
}
