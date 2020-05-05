# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s; cin >> s;
    long double x = 0, y = 0;
    long double cross = 1/(sqrt(2));
    for(auto i:s){
        if (i == '0') break;
        if (i == '1'){
            x-=cross;
            y-=cross;
        }else if (i == '2'){
            y-=1;
        }else if (i == '3'){
            x+=cross;
            y-=cross;
        }else if (i == '4'){
            x-=1;
        }else if (i == '6'){
            x+=1;
        }else if (i == '7'){
            y+=cross;
            x-=cross;
        }else if (i == '8'){
            y+=1;
        }else if (i == '9'){
            x+=cross;
            y+=cross;
        }
    }
    cout << fixed << setprecision(12) << x << " " << y << endl;
    return 0;
}