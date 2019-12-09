#include<stdio.h>
int main()
{
 long long int n, m, a, x, y;
    scanf("%lld%lld%lld", &n, &m, &a);
    x=n/a;
    if(n%a==0)
     x=x;
    else
     x++;
    y=m/a;
    if(m%a==0)
     y=y;
    else
        y++;
    //total tiles//
    printf("%lld", x*y);
    return 0;
}