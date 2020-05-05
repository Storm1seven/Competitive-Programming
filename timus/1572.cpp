# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
double calc () {
    int a, b;
    cin >> a >> b;
    if (a == 1) return b * 2;
    if (a == 2) return b;
    return sqrt(3) * b / 2.0;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int ans = 0, a, b;
    double maxval;
    cin >> a >> b;
    if (a == 1) maxval = b * 2;
    if (a == 2) maxval = b * sqrt(2);
    if (a == 3) maxval = b;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        if (calc() <= maxval) ++ans;
    }
    cout << ans << endl;
}