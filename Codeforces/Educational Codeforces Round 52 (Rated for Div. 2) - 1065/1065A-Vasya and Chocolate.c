#include<stdio.h>
int main(){
    int t;
    long long int s, a, b, c, num, ans;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%lld%lld%lld%lld",&s, &a, &b, &c);
        num = s/c;
        ans = num + (num/a)*b;
        printf("%lld\n", ans);
    }
    return 0;
}