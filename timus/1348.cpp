# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
double dist(double x1, double y1, double x2, double y2){
    double res = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
    res = sqrt(res);
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    double x1, y1, x2, y2, p, q, l; cin >> x1 >> y1 >> x2 >> y2 >> p >> q >> l;
    double xp, yp, a, b, c;
    a = y1-y2;
    b = x2-x1;
    c = y2*x1 - x2*y1;
    double k = -(a*p+b*q+c)/(a*a+b*b);
    xp = a*k + p;
    yp = b*k + q;
    double mind, maxd;
    if (dist(x1, y1, xp, yp)+dist(x2, y2, xp, yp) == dist(x1, y1, x2, y2)){
        mind = dist(xp, yp, p, q);
    }else{
        mind = min(dist(x1, y1, p, q), dist(x2, y2, p, q));
    }
    maxd = max(dist(x1, y1, p, q), dist(x2, y2, p, q));
    cout << fixed << setprecision(2) << max((double)0, mind-l) << endl;
    cout << fixed << setprecision(2) << max(0.0, maxd-l) << endl;
    return 0;
}