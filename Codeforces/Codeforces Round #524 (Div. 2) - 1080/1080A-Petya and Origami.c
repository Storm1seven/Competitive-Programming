#include<stdio.h>
int main(){
    long long n, k, a, b, c;
    scanf("%lld%lld", &n,&k);
    a = (2*n % k) ? 2*n / k + 1 : 2*n / k;
    b = (5*n % k) ? 5*n / k + 1 : 5*n / k;
    c = (8*n % k) ? 8*n / k + 1 : 8*n / k;
    printf("%lld", a+b+c);
}