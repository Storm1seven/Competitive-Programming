#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
int main(){
    ios_base::sync_with_stdio(false);
    string x, y, z;
    cin>>x>>y>>z;
    int a[26] = {}, b[26] = {};
    for(auto i:x) a[i-65]+=1;
    for(auto i:y) a[i-65]+=1;
    for(auto i:z) b[i-65]+=1;
    for (int i = 0; i< 26; i++){
        if(a[i] != b[i]) {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}