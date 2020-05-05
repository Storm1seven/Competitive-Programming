# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
ll n;
ll check(ll x, ll y){
    if (x >= 1 and x <= n and y >= 1 and y <=n) return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    ll x, y; cin >> x >> y;
    ll kingX[] = {-1, 0, 1};
    ll kingY[] = {-1, 0, 1};
    ll knightX[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    ll knightY[] = {-1, 1, 2, -2, 2, -2, -1, 1};
    ll king = 0;
    ll knight = 0;
    for(int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) king+=check(x+kingX[i], y+kingY[j]);
    for(int i = 0; i < 8; i++) knight+=check(x+knightX[i], y+knightY[i]);
    ll rook = 2*n-2;
    ll bishop = min(x-1, y-1)+min(x-1, n-y)+min(y-1, n-x)+min(n-y, n-x);
    ll queen = rook+bishop;
    cout << "King: " << king-1 << endl;
    cout << "Knight: " << knight << endl;
    cout << "Bishop: " << bishop << endl;
    cout << "Rook: " << rook << endl;
    cout << "Queen: " << queen << endl;
    return 0;
}