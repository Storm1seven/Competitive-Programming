#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
#define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    ll count_up = 0, count_low = 0;
    for(auto i:s){
        if (isupper(i)) count_up++;
        else count_low++;
    }
    if (count_up > count_low) loop(i, 0, s.size(), 1) s[i] = toupper(s[i]);
    else loop(i, 0, s.size(), 1) s[i] = tolower(s[i]);
    for (auto i:s) cout<<i;
    cout<<endl;
    return 0;
}