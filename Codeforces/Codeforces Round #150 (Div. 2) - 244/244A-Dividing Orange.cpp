#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
#define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    ll n, k, x;
    cin>>n>>k;
    vector<vector<ll>> a(k);
    unordered_set<ll> s;
    loop(i, 0, k, 1){
        cin>>x;
        s.insert(x);
        a[i].append(x);
    }
    ll j = 0;
    loop(i, 1, n*k + 1,1){
        if (a[j].size() != n){
            if (s.find(i) == s.end()) a[j].append(i);
        }
        else{
            j++;
            if (s.find(i) == s.end()) a[j].append(i);
        }
    }
    for(auto i : a){
        for(auto j:i) cout<<j<<' ';
        cout<<"\n";
    }
    return 0;
}