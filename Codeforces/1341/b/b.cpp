# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
vector<ll> tree;
void update(ll index, ll start, ll end, ll pos){
    if (start == end and start == pos){
        tree[index] = 1;
        return;
    }
    ll mid = (start+end)/2;
    if (pos <= mid) update(2*index, start, mid, pos);
    else update(2*index+1, mid+1, end, pos);
    tree[index] = tree[2*index]+tree[2*index+1];
}
ll query(ll index, ll start, ll end, ll l, ll r){
    if (l > end || r < start) return 0;
    if (l <= start and r >= end) return tree[index];
    ll mid = (start+end)/2;
    return query(2*index, start, mid, l, r) + query(2*index+1, mid+1, end, l, r);
}
void solve(){
    ll n, k; cin >> n >> k;
    tree.assign(4*n, 0);
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 1; i < n-1; i++){
        if (a[i] > a[i-1] and a[i] > a[i+1]) update(1, 0, n-1, i);
    }
    ll l = 0, r = k-1;
    ll maxp = 0, pos = 1;
    while (r <= n){
        ll p = query(1, 0, n-1, l+1, r-1);
        if (p > maxp){
            maxp = p;
            pos = l+1;
        }
        r++;
        l++;
    }
    cout << maxp+1 << " " << pos << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
