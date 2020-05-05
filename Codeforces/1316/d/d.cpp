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
ll n;
vvll x, y;
vector<vchar> grid;
ll infinite(ll p, ll q, ll r, ll s, char a, char b){
    if (x[r][s] == -1){
        grid[p][q] = a;
        if (grid[r][s] == '.') grid[r][s] = b;
        return 1;
    }
    return 0;
}
void dfs(ll i, ll j, char a){
    if (grid[i][j] != '.') return;
    grid[i][j] = a;
    if(x[i][j] == x[i+1][j] && y[i][j] == y[i+1][j])
		dfs(i+1,j,'U');
	if(x[i][j] == x[i-1][j] && y[i][j] == y[i-1][j])
		dfs(i-1,j,'D');
	if(x[i][j] == x[i][j+1] && y[i][j] == y[i][j+1])
		dfs(i,j+1,'L');
	if(x[i][j] == x[i][j-1] && y[i][j] == y[i][j-1])
		dfs(i,j-1,'R');
    return;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    x.resize(n+2, vll(n+2, 0));
    y.resize(n+2, vll(n+2, 0));
    grid.resize(n+2, vchar(n+2, '.'));
    loop(i, 1, n+1, 1){
        loop(j, 1, n+1, 1){
            cin>>x[i][j]>>y[i][j];
        }
    }
    loop(i, 1, n+1, 1){
        loop(j, 1, n+1, 1){
            if (x[i][j] == -1 and y[i][j] == -1){
                if (grid[i][j] != '.') continue;
                ll flag = 0;
                if (!flag) flag = infinite(i, j, i+1, j, 'D', 'U');
                if (!flag) flag = infinite(i, j, i, j+1, 'R', 'L');
                if (!flag) flag = infinite(i, j, i-1, j, 'U', 'D');
                if (!flag) flag = infinite(i, j, i, j-1, 'L', 'R');
                if (!flag){
                    cout<<"INVALID"<<endl;
                    return 0;
                }
            }
            else if (x[i][j] == i and y[i][j] == j){
                dfs(i, j, 'X');
            }
        }
    }
    loop(i, 1, n+1, 1){
        loop(j, 1, n+1, 1){
            if (grid[i][j] == '.'){
                cout<<"INVALID"<<endl;
                return 0;
            }
        }
    }
    cout<<"VALID"<<endl;
    loop(i, 1, n+1, 1){
        loop(j, 1, n+1, 1){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}
