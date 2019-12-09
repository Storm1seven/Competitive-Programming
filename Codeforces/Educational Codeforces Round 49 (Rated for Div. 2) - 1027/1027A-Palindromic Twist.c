#include<stdio.h>
int main()
{
 int T;
 scanf("%d",&T);
 for(int ii=0;ii<T;ii++)
 {
  int n,i,j,flag=0;
  char s[101];
  scanf("%d",&n);
  scanf("%s",s);
  for(i=0,j=n-1;i<=j;i++,j--)
   if(abs(s[i]-s[j])!=0 && abs(s[i]-s[j])!=2)
    flag=1;
  if(flag==1)printf("NO\n");
  if(flag==0)printf("YES\n");
 }
 return 0;
}