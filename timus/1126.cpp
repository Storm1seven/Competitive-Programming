# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
vector<ll> a;
vector<ll> tree;
ll n;
void build(ll index, ll start, ll end){
    if (start == end){
        tree[index] = a[start];
        return;
    }
    ll mid = (start+end)/2;
    build(2*index, start, mid);
    build(2*index+1, mid+1, end);
    tree[index] = max(tree[2*index], tree[2*index+1]);
}
ll query(ll index, ll start, ll end, ll l, ll r){
    if ( r < start || l > end) return 0;
    if (l <= start && r >= end) return tree[index];
    ll mid = (start+end)/2;
    return max(query(2*index, start, mid, l, r), query(2*index+1, mid+1, end, l, r));
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll m; cin >> m;
    while (1){
        ll x; cin >> x;
        if (x == -1) break;
        a.push_back(x);
    }
    n = a.size();
    tree.resize(4*n, 0);
    build(1, 0, n-1);
    for(ll i = 0; i+m-1 < n; i++){
        cout << query(1, 0, n-1, i, i+m-1) << '\n';
    }
    return 0;
}