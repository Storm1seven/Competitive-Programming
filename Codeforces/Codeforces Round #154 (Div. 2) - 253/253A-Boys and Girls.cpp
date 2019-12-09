#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    ifstream in("input.txt");
    ofstream out("output.txt");
    ll n, m; in>>n>>m;
    ll k = min(m, n);
    if (n > m){
        loop(i, 0, k ,1) out<<"BG";
        loop(i, 0, n-m, 1) out<<"B";
    }
    else if (m > n){
        loop(i, 0, k ,1) out<<"GB";
        loop(i, 0, m-n, 1) out<<"G";
    }
    else loop(i, 0, k ,1) out<<"BG";
    return 0;
}