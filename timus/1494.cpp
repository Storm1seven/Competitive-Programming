# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    stack<ll> st;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll pos = 0, next = 0;
    while(pos < n){
        if (st.size() and st.top() == a[pos]){
            st.pop();
            ++pos;
        }else if (next < n){
            st.push(++next);
        }else{
            cout << "Cheater" << endl;
            return 0;
        }
    }
    cout << "Not a proof" << endl;
    return 0;
}