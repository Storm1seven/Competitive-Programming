# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
vector<ll> a, tree;
void update(ll index, ll start, ll end, ll pos, ll val){
    if (start == end and start == pos){
        tree[index]+=val;
        return;
    }
    ll mid = (start+end)/2;
    if (pos <= mid) update(2*index, start, mid, pos, val);
    else update(2*index+1, mid+1, end, pos, val);
    tree[index] = tree[2*index]+tree[2*index+1];
}
ll query(ll index, ll start, ll end, ll l, ll r){
    if (l > end || r < start) return 0;
    if (l <= start and r >= end) return tree[index];
    ll mid = (start+end)/2;
    return query(2*index, start, mid, l, r) + query(2*index+1, mid+1, end, l, r);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    tree.resize(4*n);
    a.resize(n);
    vector<ll> best(n), worst(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++){
        best[a[i]-1] = query(1, 1, n, a[i]+1, n)+1;
        worst[a[i]-1] = query(1, 1, n, 1, a[i]-1) + best[a[i]-1];
        update(1, 1, n, a[i], 1);
    }
    for(ll i = 0; i < n; i++){
        update(1, 1, n, a[i], -1);
        worst[a[i]-1] += query(1, 1, n, a[i]+1, n);
    }
    for(ll i = 0; i < n; i++){
        cout << best[i] << " " << worst[i] << '\n';
    }
    return 0;
}