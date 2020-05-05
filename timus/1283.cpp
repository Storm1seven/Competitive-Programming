# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    double c, lim, r; cin >> c >> lim >> r;
    ll count = 0;
    while (c > lim){
        count++;
        c-=r*c/100;
    }
    cout << count << endl;
    return 0;
}