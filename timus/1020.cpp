# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n;
double r;
double dist(pair<double, double> a, pair<double, double> b){
    double res = sqrt(pow(a.second-b.second, 2)+pow(a.first-b.first, 2));
    return res;
}
double pi = 3.14159;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> r;
    vector< pair<double, double> > points(n);
    for(int i = 0; i < n; i++){
        cin >> points[i].first >> points[i].second;
    }
    double ans = 0.0;
    for(int i = 0; i < n; i++){
        ans+=dist(points[i], points[(i+1)%n]);
    }
    ans+=2*pi*r;
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}