#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    int a, b;
 cin >> a >> b;
 cout << max(a, b) - 1 << ' ' << min(a, b);
    return 0;
}