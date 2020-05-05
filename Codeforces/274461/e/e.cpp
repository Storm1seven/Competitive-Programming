# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
using namespace std;
# define ll long long
// # define ll int
# define vll vector<ll>
# define vvll vector<vector<ll> >
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll> >
# define mll map<ll, ll>
# define sll set<ll>
# define usll unordered_set<ll>
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
vll vin(ll n){vll a(n);loop(i, 0, n, 1) cin>>a[i];return a;}
ll intin() {ll n; cin>>n; return n;}
char charin(){char a; cin>>a; return a;}
string strin(){string s; cin>>s; return s;}
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, m; cin>>n>>m;
    vll a = vin(n);
    vll ac = a;
    sll nexteve, nextodd;
    mll freq;
    ll oddcount = 0, evencount = 0;
    loop(i, 1, m+1, 1){
        if (i%2) nextodd.add(i);
        else nexteve.add(i);
    }
    for(auto i:a){
        if(nextodd.find(i) != nextodd.end()) nextodd.erase(i);
        else if (nexteve.find(i) != nexteve.end()) nexteve.erase(i);
        freq[i]++;
        if (i%2) oddcount++;
        else evencount++;
    }
    loop(i, 0, n, 1){
        if (freq[a[i]] > 1){
            freq[a[i]]--;
            if (a[i]%2){
                if (oddcount <= evencount){
                    if (nextodd.size()){
                        a[i] = *nextodd.begin();
                        nextodd.erase(a[i]);
                    }else{
                        cout<<-1<<endl;
                        return 0;
                    }
                }else{
                    if (nexteve.size()){
                        a[i] = *nexteve.begin();
                        nexteve.erase(a[i]);
                        oddcount--;
                        evencount++;
                    }else{
                        cout<<-1<<endl;
                        return 0;
                    }
                }
            }else{
                if (oddcount > evencount){
                    if (nextodd.size()){
                        a[i] = *nextodd.begin();
                        nextodd.erase(a[i]);
                        evencount--;
                        oddcount++;
                    }else{
                        cout<<-1<<endl;
                        return 0;
                    }
                }else{
                    if (nexteve.size()){
                        a[i] = *nexteve.begin();
                        nexteve.erase(a[i]);
                    }else{
                        cout<<-1<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    loop(i, 0, n, 1){
        if (oddcount < evencount and a[i]%2 == 0){
            if (nextodd.size()){
                a[i] = *nextodd.begin();
                nextodd.erase(a[i]);
                oddcount++;
                evencount--;
            }else{
                cout<<-1<<endl;
                return 0;
            }
        }else if(evencount < oddcount and a[i]%2){
            if (nexteve.size()){
                a[i] = *nexteve.begin();
                nexteve.erase(a[i]);
                evencount++;
                oddcount--;
            }else{
                cout<<-1<<endl;
                return 0;
            }
        }else{
            break;
        }
    }
    if (oddcount!=evencount){
        cout<<-1<<endl;
        return 0;
    }
    ll changecount = 0;
    loop(i, 0, n, 1){
        changecount+=(ac[i]!=a[i]);
    }
    cout<<changecount<<endl;
    for(auto i:a) cout<<i<<" ";
    cout<<endl;
    return 0;
}
