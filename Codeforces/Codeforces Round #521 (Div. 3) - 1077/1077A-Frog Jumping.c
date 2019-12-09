#include<stdio.h>
int main(){
 int t;
 scanf("%d", &t);
 while(t > 0){
  long long a, b, k;
  scanf("%lld%lld%lld", &a, &b, &k);
  if (k%2 == 0) printf("%lld\n", (a-b)*(k/2));
  else printf("%lld\n", ((a-b)*(k/2)) + a);
  t--;
 }
 return 0;
}