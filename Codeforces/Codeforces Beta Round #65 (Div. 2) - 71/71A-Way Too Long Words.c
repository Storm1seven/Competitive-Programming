#include<stdio.h>
int main()
{   
 int n;
 char a[100];
 scanf("%d", &n);
 for(int i=0; i<n; i++)
 {
  scanf("%s", a);
  int x;
  x=0;
  int k=0;
  while(a[k]!='\0')
  {
   x++;
   k++;
  }
  if(x>10)
  printf("%c%d%c\n", a[0], (x-2), a[x-1]);
     else
     printf("%s\n", a);
 }
 return 0;
}