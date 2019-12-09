#include<stdio.h>
int main()
{
 int n,k;
 scanf("%d%d", &n, &k);
 int a[n];
 //array initialistaion//
 for(int i=0; i<n; i++)
 {
  scanf("%d", &a[i]);
 }
 //counting the one's that satisfy condition//
 int x=0;
 int p=0;
 for(int i=0; i<n; i++)
 {
    if(a[i]==0)
   p++;
  else if(a[i]>=a[k-1])
   x++;
  }
 printf("%d", x);
 return 0;
 }