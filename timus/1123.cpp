# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s; cin >> s;
    ll n = s.size();
    ll left = n/2-1;
    ll right = n/2;
    if (n%2 == 1) left++;
    while (0 <= left and right <= n-1){
        if (s[left] > s[right]){
            break;
        }
        else if(s[left] < s[right]){
            ll carry = 1;
            ll l = n/2-1;
            if (n%2) l++;
            for(ll i = l; i >= 0; i--){
                if (carry == 0) break;
                if (s[i] == '9'){
                    s[i] = '0';
                    carry = 1;
                }else{
                    s[i]++;
                    carry = 0;
                }
            }
            break;
        }else{
            left--;
            right++;
        }
    }
    for (ll i = 0; i < n; i++){
        if (i >= n/2) cout << s[n-1-i];
        else cout << s[i];
    }
    return 0;
}