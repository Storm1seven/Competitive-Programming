#include<stdio.h>
int main(){
    long long na, nb, k, m, num1 = 0, num2 = 0;
    scanf("%lld%lld", &na, &nb);
    long long a[na], b[nb];
    scanf("%lld%lld", &k, &m);
    for (int i = 0; i < na; i++) scanf("%lld", &a[i]);
    for (int i = 0; i < nb; i++) scanf("%lld", &b[i]);
    if (a[k-1] < b[nb - m]) printf("YES\n");
    else printf("NO\n");
    return 0;    
}