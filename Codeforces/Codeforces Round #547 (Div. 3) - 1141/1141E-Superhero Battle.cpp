#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll h, n, sum = 0, m = 0, H;
    cin>>h>>n;
    H = h;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sum-=a[i];
        H+=a[i];
        if (H <= 0){
            cout<<i+1<<endl;
            return 0;
        }
        m = max(m, sum);
    }
    if (sum <= 0){
        cout<<"-1\n";
        return 0;
    }
    ll full = (h-m)/sum;
    h-=full*sum;
    ll count = full*n;
    for(int i = 0;;i++){
        h+=a[i%n];
        count++;
        if (h<=0){
            cout<<count<<endl;
            break;
        }
    }
}