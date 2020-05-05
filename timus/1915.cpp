# include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    deque<int> q;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        if (val > 0) q.push_back(val);
        else if (val < 0){
            cout << q.back() << '\n';
            q.pop_back();
        }else{
            if (q.size() <= n-i) q.insert(q.end(), q.begin(), q.end());
        }
    }
    return 0;
}