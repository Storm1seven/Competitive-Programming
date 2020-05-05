# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    unsigned int a;
    priority_queue<unsigned int> q;
    scanf("%d",&n);
    for(int i = 0; i <= n/2; i++){
        scanf("%u",&a);
        q.push(a);
    }
    for(int i = n/2+1; i < n; i++){
        scanf("%u",&a);
        q.push(a);
        q.pop();
    }
    if(n%2) printf("%u\n",q.top());
    else{
        a = q.top();
        q.pop();
        printf("%.1f\n",(a + q.top()) / 2.0);
    }
    return 0;
}