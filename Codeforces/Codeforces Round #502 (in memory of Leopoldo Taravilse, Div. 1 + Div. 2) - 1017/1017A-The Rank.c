#include<stdio.h>
int main(){
 long long n, a, b, c, d, count, sum, mark;
 scanf("%lld", &n);
 count = 1;
 scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
 mark = a+b+c+d;
 for(int i = 1; i < n; i++){
  scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
  sum = a+b+c+d;
  if (sum > mark) count++; 
 }
 printf("%lld", count);
 return 0;
}