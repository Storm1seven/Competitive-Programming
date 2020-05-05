# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
// # include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll nr, ng, nb; cin >> nr >> ng >> nb;
        vector<ll> r(nr), g(ng), b(nb);
        for(ll i = 0; i < nr; i++) cin >> r[i];
        for(ll i = 0; i < ng; i++) cin >> g[i];
        for(ll i = 0; i < nb; i++) cin >> b[i];
        sort(r.begin(), r.end());
        sort(g.begin(), g.end());
        sort(b.begin(), b.end());
        ll ans = LLONG_MAX;
        for (auto i:r){
            ll ptrg = lower_bound(g.begin(), g.end(), i) - g.begin();
            ll ptrb = lower_bound(b.begin(), b.end(), i) - b.begin();
            vector<ll> pg, pb;
            if (ptrg-1 >= 0) pg.push_back(g[ptrg-1]);
            if (ptrg < ng) pg.push_back(g[ptrg]);
            if (ptrg+1 < ng) pg.push_back(g[ptrg+1]);
            if (ptrb-1 >= 0) pb.push_back(b[ptrb-1]);
            if (ptrb < nb) pb.push_back(b[ptrb]);
            if (ptrb+1 < nb) pb.push_back(b[ptrb+1]);
            // cout << i << " " << pg << " " << pb << endl;
            for(auto x:pg){
                for(auto y:pb){
                    ans = min(ans, (x-i)*(x-i) + (y-i)*(y-i) + (x-y)*(x-y));
                }
            }
        }
        for (auto i:g){
            ll ptrr = lower_bound(r.begin(), r.end(), i) - r.begin();
            ll ptrb = lower_bound(b.begin(), b.end(), i) - b.begin();
            vector<ll> pr, pb;
            if (ptrr-1 >= 0) pr.push_back(r[ptrr-1]);
            if (ptrr < nr) pr.push_back(r[ptrr]);
            if (ptrr+1 < nr) pr.push_back(r[ptrr+1]);
            if (ptrb-1 >= 0) pb.push_back(b[ptrb-1]);
            if (ptrb < nb) pb.push_back(b[ptrb]);
            if (ptrb+1 < nb) pb.push_back(b[ptrb+1]);
            for(auto x:pr){
                for(auto y:pb){
                    ans = min(ans, (x-i)*(x-i) + (y-i)*(y-i) + (x-y)*(x-y));
                }
            }
        }
        for (auto i:b){
            ll ptrg = lower_bound(g.begin(), g.end(), i) - g.begin();
            ll ptrr = lower_bound(r.begin(), r.end(), i) - r.begin();
            vector<ll> pg, pr;
            if (ptrg-1 >= 0) pg.push_back(g[ptrg-1]);
            if (ptrg < ng) pg.push_back(g[ptrg]);
            if (ptrg+1 < ng) pg.push_back(g[ptrg+1]);
            if (ptrr-1 >= 0) pr.push_back(r[ptrr-1]);
            if (ptrr < nr) pr.push_back(r[ptrr]);
            if (ptrr+1 < nr) pr.push_back(r[ptrr+1]);
            for(auto x:pg){
                for(auto y:pr){
                    ans = min(ans, (x-i)*(x-i) + (y-i)*(y-i) + (x-y)*(x-y));
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
