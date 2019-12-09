#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y, z, a, b, c, flag;
    cin>>x>>y>>z>>a>>b>>c;
    flag = 1;
    if (x > a) flag = 0;
    if (y > a-x+b) flag = 0;
    if (z > a+b+c - x - y) flag = 0;
    if (flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
}