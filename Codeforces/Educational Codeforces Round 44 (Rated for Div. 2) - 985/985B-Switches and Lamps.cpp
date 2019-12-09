#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    string s;
    vector<int> count(m);
    vector<string> x(n);
    for(int i = 0; i< n; i++){
        cin>>s;
        x[i] = s;
        for(int j = 0; j<m; j++){
            count[j]+=s[j] - 48;
        }
    }
    for(int i = 0; i < n; i++){
        int num = 1;
        for(int j = 0; j<m; j++){
            if (x[i][j] == '1' && count[j] == 1) num--;
        }
        if (num == 1){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}