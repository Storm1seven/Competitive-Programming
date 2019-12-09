#include<stdio.h>
#define ll long long
int main(){
    ll t, n, a, b, ans;
    scanf("%lld", &t);
    for (int ii = 0; ii < t; ii++){
        scanf("%lld%lld%lld", &n, &a, &b);
        ans = 0;
        if (b <= 2*a){
            if (n%2 == 0) ans = n*b/2;
            else ans = (n-1)*b/2 + a;
        }
        else ans = n*a;
        printf("%lld\n", ans);
    }
    return 0;
}