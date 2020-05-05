# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    vector<ll> x(3);
    for(int i = 0; i < 3; i++){
        cin >> x[i];
    }
    ll count = 0;
    while (1){
        count++;
        sort(x.begin(), x.end());
        ll mindiff = LLONG_MAX;
        for(int i = 0; i+1 < x.size(); i++){
            mindiff = min(x[i+1]-x[i], mindiff);
        }
        if (mindiff == 0) break;
        x.push_back(mindiff);
    }
    cout << count << endl;
    return 0;
}