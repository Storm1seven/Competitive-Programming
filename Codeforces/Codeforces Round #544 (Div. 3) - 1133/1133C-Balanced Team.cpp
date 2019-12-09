#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, j;
    cin>>n;
    m = 0;
    i = 0;
    j = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    while (j<n){
        while(j < n && a[j]-a[i] <= 5) j++;
        m = max(m, j-i);
        i++;
    }
    cout<<m<<endl;
    return 0;
}