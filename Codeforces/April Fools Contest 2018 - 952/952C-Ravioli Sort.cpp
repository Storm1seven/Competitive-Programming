#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, flag = 1;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    for(int i = 1; i < n; i++){
        if (abs(v[i] - v[i-1]) >= 2) flag = 0;
    }
    if (flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}