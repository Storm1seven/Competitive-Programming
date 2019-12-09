#include<stdio.h>
int main(){
    long long t, L, v, l, r, ans;
    scanf("%lld", &t);
    for(int i=0; i<t; i++){
        scanf("%lld%lld%lld%lld", &L, &v, &l, &r);
 ans = L/v - (r/v - l/v);
 if (l%v == 0) ans-=1;
        printf("%lld\n",ans);
    }
    return 0;
}