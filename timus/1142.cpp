#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define bs binary_search
#define vl vector<ll>
#define pll pair<ll, ll>
#define vpl vector<pair<ll, ll>>
#define mll map<ll, ll>
#define mcl map<char, ll>
#define pqll priority_queue<ll>
#define mpl map<pair<ll, ll>, ll>
#define msl map<string, ll>
#define mset(a, k) memset(a, k, sizeof(a));
#define len length()
#define fr(a, b, c) for (ll a = b; a < c; a++)
void in(ll *a, ll n)
{
    fr(i, 0, n) { cin >> a[i]; }
}
void out(ll *a, ll n)
{
    fr(i, 2, n) { cout << a[i] << " "; }
}
void out(vector<pll> v)
{
    fr(i, 0, (ll)v.size()) cout << v[i].ff << " " << v[i].ss << "\n";
    cout << "\n";
}
void out(ll a) { cout << a << "\n"; }
void out(string s) { cout << s; }
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
//#define int long long
ll fact[11];

int main()
{
    fast();
    ll a[11];
    ll ans[11];
    ans[2] = 3;
    a[1] = 1;
    ans[3] = 13;
    fact[0] = 1;
    fr(i, 1, 11)
    {
        fact[i] = i * fact[i - 1];
    }
    fr(i, 2, 11)
    {
        ll prev = 0, ans1 = 0;
        fr(j, 1, (i))
        {
            ll k = j * a[j];
            ll jk = a[j] * (j + 1);
            ans1 += (k + jk);
            a[j] = k + prev;
            prev = jk;
        }
        a[i] = prev;
        ans[i] = ans1;
        //cout<<a[i]<<" ";
    }
    out(ans, 11);
}