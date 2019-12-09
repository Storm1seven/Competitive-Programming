#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, cpos = 0, cneg = 0;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++){
        if (a[i] < 0) cneg++;
        else if (a[i]>0) cpos++;
    }
    if (cpos >= (n+1)/2) cout<<'1'<<'\n';
    else if (cneg >= (n+1)/2) cout<<"-1"<<'\n';
    else cout<<'0'<<'\n';
    return 0;
}