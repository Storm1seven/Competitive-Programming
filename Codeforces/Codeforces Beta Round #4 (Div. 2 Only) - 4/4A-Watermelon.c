#include<stdio.h>
int main()
{
 int w;
 scanf("%d", &w);
 if(w%2==0 && w!=2)
  {printf("YES");}
 else if(w%2!=0)
  {printf("NO");}
 else if(w=2)
  {printf("NO");}
 return 0;
}