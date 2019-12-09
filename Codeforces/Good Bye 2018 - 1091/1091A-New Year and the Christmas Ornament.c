#include<stdio.h>
int dep(int a, int b, int c){
 if (a+1 <= b && a+2 <= c) return 3*a + 3;
 else dep(a-1, b, c);
}
int main(){
 int a, b, c, ans;
 scanf("%d%d%d", &a, &b, &c);
 ans = dep(a, b, c);
 printf("%d", ans);
 return 0;
}