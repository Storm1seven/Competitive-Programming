#include<stdio.h>
#include<string.h>
char s[200005],t[200005];
int main()
{
    scanf("%s %s", s, t);
    int l=strlen(s),r=strlen(t);
    int i;
    for(i=0;i<l && i<r;i++) if(s[l-1-i]!=t[r-1-i]) break;
    printf("%d", l+r-2*i);
    return 0;
}