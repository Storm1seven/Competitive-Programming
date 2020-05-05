# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, q;
vector<ll> tree, a;
void build(ll index, ll start, ll end){
    if (start == end){
        tree[index] = a[start];
        return;
    }
    ll mid = (start+end)/2;
    build(2*index, start, mid);
    build(2*index+1, mid+1, end);
    tree[index] = tree[2*index]+tree[2*index+1];
}
ll query(ll index, ll start, ll end, ll l, ll r){
    if (l > end || r < start) return 0;
    if (l <= start && r >= end) return tree[index];
    ll mid = (start+end)/2;
    return query(2*index, start, mid, l, r)+query(2*index+1, mid+1, end, l, r);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    a.resize(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    tree.resize(4*n, 0);
    build(1, 0, n-1);
    cin >> q;
    for(ll i = 0; i < q; i++){
        ll l, r; cin >> l >> r;
        cout << query(1, 0, n-1, l-1, r-1) << '\n';
    }
    return 0;
}