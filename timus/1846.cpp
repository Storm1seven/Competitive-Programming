# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
vector<ll> tree;
map<ll, vector<ll> > m;
ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}
void update(ll index, ll start, ll end, ll pos, ll val){
    // cout << index << ' ' << start << ' ' << end << ' ' << pos << ' ' << val << endl;
    if (start == end and start == pos){
        tree[index]+=val;
        return;
    }
    ll mid = (start+end)/2;
    if (pos <= mid) update(2*index, start, mid, pos, val);
    else update(2*index+1, mid+1, end, pos, val);
    tree[index] = gcd(tree[2*index], tree[2*index+1]);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    tree.resize(4*n, 0);
    for (ll i = 0; i < n; i++){
        char type; cin >> type;
        if (type == '+'){
            ll val; cin >> val;
            m[val].push_back(i);
            update(1, 0, n-1, i, val);
        }else{
            ll val; cin >> val;
            update(1, 0, n-1, m[val].back(), -val);
            m[val].pop_back();
        }
        // cout << tree << endl;
        if (tree[1] == 0) cout << 1 << '\n';
        else cout << tree[1] << '\n';
    }
    return 0;
}