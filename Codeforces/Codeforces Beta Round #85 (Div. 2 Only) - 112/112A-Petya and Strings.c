#include<stdio.h>
#include<string.h>
 int main()
{
 char x[100];
 char y[100];
 scanf("%s%s", x, y);
 int z=strcasecmp(x,y);
 printf("%d", z);
    return 0;
 }