# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    double l, h, w; cin >> l >> h >> w;
    w/=60;
    double g = 981;
    if (h < l/2){
        cout << "butter" << endl;
        return 0;
    }
    double t = sqrt(2*(h-l/2.0)/g);
    w*=t;
    w-=(ll)w;
    if ((w >= 0 and w <= 0.25) or (w >= 0.75 and w <= 1)){
        cout <<"butter" << endl;
    }else{
        cout << "bread" << endl;
    }
    return 0;
}