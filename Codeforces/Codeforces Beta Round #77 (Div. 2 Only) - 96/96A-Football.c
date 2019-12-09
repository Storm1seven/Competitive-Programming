#include<stdio.h>
#include<string.h>
 int main()
{
    char x[100];
    scanf("%s", x);
    int y=strlen(x);
    int z=0;
    for(int i=0; i<y; i++)
    {
       if(x[i]==x[i+1])
       {
         z++;
         if(z==6)
         {
          printf("YES");
          break;
         } 
       }
       else
       {
        z=0;
       }
           }
    if(z==0)
       {
        printf("NO");
       }
    return 0;
 }