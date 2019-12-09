/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define vvll vector<vector<ll>>
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll>>
# define sll set<ll>
# define schar set<char>
# define pll pair<ll, ll>
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define popb pop_back
# define add insert
# define all(v) v.begin(), v.end()
# define rall(v) v.rbegin(), v.rend()
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' ';} cout<<'\n';}
int main(){
    ios_base::sync_with_stdio(false);
    ll n, m, x; cin>>n>>m;
    vector<vector<ll>> a(n);
    loop(i, 0, n, 1){
        loop(j, 0, m, 1){
            cin>>x;
            a[i].append(x);
        }
    }
    ll result = 0;
    loop(i, 0, n, 1) result^=a[i][0];
    if (result == 0){
        loop(i, 0, n, 1){
            loop(j, 1, m, 1){
                if (a[i][0] != a[i][j]){
                    cout<<"TAK\n";
                    loop(k, 0, i, 1) cout<<1<<" ";
                    cout<<j+1<<" ";
                    loop(k, i+1, n, 1) cout<<1<<" ";
                    return 0;
                } 
            }
        }
        cout<<"NIE\n";
    }
    else{
        cout<<"TAK\n";
        loop(i, 0, n, 1) cout<<1<<" ";
    }
    return 0;
}