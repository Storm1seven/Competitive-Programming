#include<bits/stdc++.h>
using namespace std;
# define ll long long
#define append push_back
int main(){
    ll n, k, count = 0;;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        a[i]+=k;
    }
    for (auto i : a){
        if (i <= 5) count++;
    }
    cout<<count/3<<endl;
    return 0;
}