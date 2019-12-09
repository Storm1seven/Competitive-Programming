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
# define pop pop_back
# define add insert
# define all(v) v.begin(), v.end()
# define rall(v) v.rbegin(), v.rend()
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' ';} cout<<'\n';}
int main(){
    ios_base::sync_with_stdio(false);
    char dir; cin>>dir;
    string s; cin>>s;
    vector<vector<char>> key(3);
    key[0] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    key[1] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'};
    key[2] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    map<char, char> d;
    if (dir == 'R'){
        loop(i, 0, 3, 1){
            loop(j, 1, key[i].size(), 1){
                d[key[i][j]] = key[i][j-1];
            }
        }
        for(auto i:s) cout<<d[i];
        cout<<"\n";
    }
    else{
        loop(i, 0, 3, 1){
            loop(j, 0, key[i].size()-1, 1){
                d[key[i][j]] = key[i][j+1];
            }
        }
        for(auto i:s) cout<<d[i];
        cout<<"\n";
    }
    return 0;
}