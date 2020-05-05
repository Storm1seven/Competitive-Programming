# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll a, b, c; cin >> a >> b >> c;
    ll x, y, z; cin >> x >> y >> z;
    if (a >= x){
        a-=x;
        x = 0;
    }else{
        x-=a;
        a = 0;
        if (c >= x){
            c-=x;
            x = 0;
        }else{
            cout << "There are no miracles in life" << endl;
            return 0;
        }
    }
    if (b >= y){
        b-=y;
        y = 0;
    }else{
        y-=b;
        b = 0;
        if (c >= y){
            c-=y;
            y = 0;
        }else{
            cout << "There are no miracles in life" << endl;
            return 0;
        }
    }
    ll rem = a+b+c;
    if (rem >= z){
        cout << "It is a kind of magic" << endl;
    }else{
        cout << "There are no miracles in life" << endl;
    }
    return 0;
}