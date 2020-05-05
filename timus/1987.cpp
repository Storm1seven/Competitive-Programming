# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
# define endl '\n'
struct point{
    ll pos, type, index;
    bool operator< (const point& other) const{
        if (pos == other.pos){
            if (type == other.type){
                return index < other.index;
            }
            return type < other.type;
        }
        return pos < other.pos;
    }
    point(ll _pos, ll _type, ll _index){
        pos = _pos;
        type = _type;
        index = _index;
    }
};
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<point> c;
    for(ll i = 0 ; i < n; i++){
        ll a, b; cin >> a >> b;
        c.push_back(point(a, 1, i+1));
        c.push_back(point(b, 3, i+1));
    }
    ll q; cin >> q;
    vector<ll> ans(q);
    for(ll i = 0; i < q; i++){
        ll p; cin >> p;
        c.push_back(point(p, 2, i));
    }
    sort(c.begin(), c.end());
    stack<point> st;
    for(auto i:c){
        if (i.type == 1) st.push(i);
        else if (i.type == 3) st.pop();
        else{
            if (st.size()){
                ans[i.index] = st.top().index;
            }else{
                ans[i.index] = -1;
            }
        }
    }
    for(auto i:ans) cout << i << endl;
    return 0;
}