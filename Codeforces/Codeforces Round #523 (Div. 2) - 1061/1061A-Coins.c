#include<stdio.h>
int main(){
 long long int n, s;
 scanf("%lld%lld", &n, &s);
 if (s%n == 0) printf("%lld", s/n);
 else printf("%lld", s/n + 1);
 return 0;
}