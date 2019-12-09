#include<stdio.h>
int main(){
 long long w, h, k, num;
 num = 0;
 scanf("%lld%lld%lld", &w, &h, &k);
 for (long long i = 1; i <= k; i++){
  num+= 2*(w - 4*(i-1))+2*(h-4*(i-1)) - 4;
 }
 printf("%lld", num);
 return 0;
}