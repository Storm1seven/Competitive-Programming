# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
double pi = 3.14159265;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    double a, r; cin >> a >> r;
    if (r <= a/2){
        cout << fixed << setprecision(3) << pi*r*r << endl;
    }else if (r >= a/sqrt(2)){
        cout << fixed << setprecision(3) << a*a << endl;
    }else{
        double cosx = a/(2*r);
        double x = acos(cosx);
        double base = sqrt(4*r*r - a*a);
        double height = a/2;
        double at = base*height*0.5;
        double theta = 2*x;
        double area = r*r*theta*0.5;
        double sub = area-at;
        cout << fixed << setprecision(3) << pi*r*r-4*sub << endl;
    }
    return 0;
}