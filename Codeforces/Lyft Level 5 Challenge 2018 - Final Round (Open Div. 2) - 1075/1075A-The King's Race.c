#include<stdio.h>
int main(){
 long long n, x, y, dw, db;
 scanf("%lld%lld%lld", &n, &x, &y);
 dw = x - 1 + y - 1;
 db = n - x + n - y;
 if (db < dw) printf("Black");
 else printf("White");
 return 0;
}