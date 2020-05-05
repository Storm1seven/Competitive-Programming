#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 4;
    cout << n << '\n';
    for(int i = 1; i <= n; i++) 
    {
        if(i != 1)
            cout << ' ';
        if(i<=n/2)
         cout << 0;
        else
         cout << i;
    }
    cout << '\n';
}