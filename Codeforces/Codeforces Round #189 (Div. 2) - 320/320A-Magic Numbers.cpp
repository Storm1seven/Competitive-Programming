#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append push_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
int main(){
    ios_base::sync_with_stdio(false);
    string n; cin>>n;
    loop(i, 0, (int) n.size(), 1){
        if (n[i] != '1' && n[i] != '4'){
            cout<<"NO\n";
            return 0;
        }
    }
    if (n[0] == '4'){
        cout<<"NO\n";
        return 0;
    }
    if (n.find("444") != n.npos){
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    return 0;
}