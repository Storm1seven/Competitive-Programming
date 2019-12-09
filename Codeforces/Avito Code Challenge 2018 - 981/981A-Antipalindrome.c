#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
 scanf("%s", s);
 int n = strlen(s);
 int flag = 1;
 for (int i = 0; i < n/2; i++){
     if (s[i] != s[n-i-1]) flag = 0;
     if (flag == 0) break;
 }
 int flags = 1;
 for (int i = 0; i < n-1; i++){
     if (s[i]!=s[i+1]) flags = 0;
 }
 if (flag == 0) printf("%d", n);
 else{
     if (flags == 1) printf("0");
     else printf("%d", n-1);
 }
 return 0;
}