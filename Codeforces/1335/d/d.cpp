# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >>t;
    while(t--){
        vector<vector<char> > a(9, vector<char>(9));
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cin >> a[i][j];
            }
        }
        int pos[9][2] = {{0, 0}, {1, 3}, {2, 6}, {3, 1}, {4, 4}, {5, 7}, {6, 2}, {7, 5}, {8, 8}}; 
        for(int i = 0; i < 9; i++){
            if (a[pos[i][0]][pos[i][1]] == '9') a[pos[i][0]][pos[i][1]] = '1';
            else a[pos[i][0]][pos[i][1]]++;
        }
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cout << a[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}
