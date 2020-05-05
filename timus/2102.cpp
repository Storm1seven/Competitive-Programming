# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int checkprime(ll n){
    if (n == 1) return 0;
    for (ll i = 2;i*i <= n;i++){
        while (n%i == 0) return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    int cnt = 0;
    for (ll i = 2;i*i <= 2000000;i++){
        while (n%i == 0){
            n /= i;
            cnt++;
        }
    }
    if (n == 1){
        if (cnt == 20) cout << "Yes\n";
        else cout << "No\n";
        return 0;
    }
    if (cnt < 18) cout <<"No\n";
    else if (cnt == 18){
        if (checkprime(n)) cout << "No\n";
        else cout << "Yes\n";
    }else if (cnt == 19){
        if (checkprime(n)) cout << "Yes\n";
        else cout << "No\n";
    }else if (cnt == 20){
        if (n == 1) cout << "Yes\n";
        else cout << "No\n";
    }else{
        cout << "No\n";
    }
    return 0;
}