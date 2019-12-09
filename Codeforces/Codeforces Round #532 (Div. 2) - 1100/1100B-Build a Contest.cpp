#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, m;
    cin>>n>>m;
    vector<long long int>a;
    for(long long int i = 0; i<m; i++){
        long long int x;
        cin>>x;
        a.push_back(x);
    }
    set<long long int>s;
    map<long long int, long long int>dict;
    for(long long int i = 0; i <m; i++){
        dict[a[i]]+=1;
        s.insert(a[i]);
        if (s.size() == n){
            cout<<1;
            for (long long int j = 1; j<=n; j++){
                dict[j]-=1;
                if (dict[j] == 0) s.erase(j);
            }
        }
        else cout<<0;
            }
    return 0;
}