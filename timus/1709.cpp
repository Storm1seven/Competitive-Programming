# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n, a, d;
vector<ll> parent;
ll find(ll x){
    if (parent[x]==x) return x;
    return parent[x] = find(parent[x]);
}
void join(ll u, ll v){
    if(rand()%2) parent[find(u)] = find(v);
    else parent[find(v)] = find(u);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> d >> a;
    vector< vector<char> > grid(n, vector<char>(n)), ans(n, vector<char>(n, '0'));
    ll val = 0;
    parent.resize(n);
    for(ll i=0; i<n; i++) parent[i]=i;
    for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) cin >> grid[i][j];
    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            if (grid[i][j]=='1'){
                if (find(i)==find(j)){
                    ans[i][j] = ans[j][i] = 'd';
                    val+=d;
                }else{
                    join(i, j);
                }
            }
        }
    }
    for(ll i=0; i<n; i++){
        parent[i] = find(i);
    }
    ll first = -1;
    set<ll> second;
    for(ll i = 0; i < n; i++){
        if (first == -1){
            first = parent[i];
            continue;
        }
        if (parent[i]!=first){
            second.insert(parent[i]);
        }
    }
    for(auto i:second){
        ans[first][i] = ans[i][first] = 'a';
        val+=a;
    }
    cout << val << endl;
    for(auto i:ans){
        for(auto j:i) cout << j;
        cout << endl;
    }
    return 0;
}