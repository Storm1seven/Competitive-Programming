#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    int n,i,j,k;
    cin>>n;
    for(i=0;i<=2*n;i++){
        j=n-abs(i-n);
        k=0;
        while(k<n-j){
            cout<<"  "; 
            k++;
        }
        k=j;
        while(k>-j){
            cout<<j-abs(k)<<" ";
            k--;
        }
        cout<<0<<endl;
    }
return 0;
}