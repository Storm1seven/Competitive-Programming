# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    // ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k,a[101],i,j;
    cin >> n >> k;
    k=(n+k-1)/k;
    for(i=0;i<n;i++)cin >> a[i];
    for(j=0;j<k;puts(""), j++)
        for(i=j;i<n;i+=k)
           printf("%4d",a[i]);
    return 0;
}