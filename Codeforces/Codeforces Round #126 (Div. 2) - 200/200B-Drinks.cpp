#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
int main(){
    ios_base::sync_with_stdio(false);
    int n; cin>>n;
    long double s = 0.0, x;
    for(int i = 0; i < n; i++){
        cin>>x;
        s+=x;
    }
    cout<<s/(long double)n<<"\n";
    return 0;
}