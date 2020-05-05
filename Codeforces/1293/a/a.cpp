#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long
// # define ll int
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vchar vector<char>
#define vstr vector<string>
#define vpll vector<pair<ll, ll>>
#define mll map<ll, ll>
#define sll set<ll>
#define usll unordered_set<ll>
#define schar set<char>
#define pll pair<ll, ll>
#define append_left push_front
#define append push_back
#define pop_left pop_front
#define popb pop_back
#define add insert
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define loop(i, k, n, inc) for (ll i = k; i < n; i += inc)
#define rloop(i, k, n, inc) for (ll i = k; i > n; i += inc)
vll vin(ll n)
{
    vll a(n);
    loop(i, 0, n, 1) cin >> a[i];
    return a;
}
ll intin()
{
    ll n;
    cin >> n;
    return n;
}
char charin()
{
    char a;
    cin >> a;
    return a;
}
string strin()
{
    string s;
    cin >> s;
    return s;
}
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
// C++ program for building suffix array of a given text
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct suffix{
    ll index;
    ll rank[2];
} suffix;
int cmp(struct suffix a, struct suffix b){
    return (a.rank[0] == b.rank[0]) ? (a.rank[1] < b.rank[1] ? 1 : 0) : (a.rank[0] < b.rank[0] ? 1 : 0);
}
vll buildSuffixArray(string s, ll n){
    vector<struct suffix> suffixes(n);
    loop(i, 0, n, 1){
        suffixes[i].index = i;
        suffixes[i].rank[0] = s[i] - 'a';
        suffixes[i].rank[1] = ((i + 1) < n) ? (s[i + 1] - 'a') : -1;
    }
    sort(all(suffixes), cmp);
    vll ind(n, 0);
    for (ll k = 4; k < 2 * n; k = k * 2){
        ll rank = 0;
        ll prev_rank = suffixes[0].rank[0];
        suffixes[0].rank[0] = rank;
        ind[suffixes[0].index] = 0;
        loop(i, 1, n, 1){
            if (suffixes[i].rank[0] == prev_rank && suffixes[i].rank[1] == suffixes[i - 1].rank[1]){
                suffixes[i].rank[0] = rank;
            }
            else{
                prev_rank = suffixes[i].rank[0];
                suffixes[i].rank[0] = ++rank;
            }
            ind[suffixes[i].index] = i;
        }
        loop(i, 0, n, 1){
            ll nextindex = suffixes[i].index + k / 2;
            suffixes[i].rank[1] = (nextindex < n) ? suffixes[ind[nextindex]].rank[0] : -1;
        }
        sort(all(suffixes), cmp);
    }
    vll suffixArray(n, 0);
    loop(i, 0, n, 1) suffixArray[i] = suffixes[i].index;
    return suffixArray;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    ll n;
    cin >> n >> s;
    vll sa = buildSuffixArray(s, n);
    loop(i, 0, n, 1) cout << sa[i] << " ";
    cout << endl;
    return 0;
}