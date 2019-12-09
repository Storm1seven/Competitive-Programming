#include<stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 //defining matrix
 int a[n][3];
 for(int i=0; i<n; i++)
 {
  for(int j=0; j<3; j++)
   scanf("%d", &a[i][j]);
 }
 int p,x;
 x=0;
 //counting number of rows satisfying the condition//
 for(int i=0; i<n; i++)
 {
  p=0;
  for(int j=0; j<3; j++)
  {   
      if(a[i][j]==0)
    p++;
  }
  if(p==1||p==0)
   {x++;}
  }
 printf("%d", x);
 return 0;
}