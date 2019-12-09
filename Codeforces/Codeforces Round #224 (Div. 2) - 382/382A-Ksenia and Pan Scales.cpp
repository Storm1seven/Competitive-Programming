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
    string s; cin>>s;
    string unused; cin>>unused;
    string left, right;
    ll flag = 1;
    for(auto i:s){
       if (i == '|') flag = 0;
       if (flag) left+=i;
       else if (i!='|') right+=i;
    }
    ll total = right.size() + left.size() + unused.size();
    if (total % 2 == 0){
        if (right.size() <= total/2 && left.size() <= total/2){
            ll i = 0;
            while (right.size() < total/2){
                right+=unused[i];
                i++;
            }
            while (left.size() < total/2){
                left+=unused[i];
                i++;
            }
            cout<<left<<"|"<<right<<"\n";
        }
        else cout<<"Impossible\n";
    }
    else cout<<"Impossible\n";
    return 0;
}