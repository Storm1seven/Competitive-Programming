#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
#define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    string s = "WBWBWBWB", srev = "BWBWBWBW";
    string x;
    loop(i, 0, 8, 1){
        cin>>x;
        if (x != s && x != srev){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}