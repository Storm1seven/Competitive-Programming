#include<stdio.h>
int main(){
    char s[2];
    scanf("%s", s);
    char a[2], b[2], c[2], d[2], e[2];
    int flag = 0;
    scanf("%s%s%s%s%s", a, b, c, d, e);
    if (s[0] == a[0]) flag = 1;
    if (s[1] == a[1]) flag = 1;
    if (s[0] == b[0]) flag = 1;
    if (s[1] == b[1]) flag = 1;
    if (s[0] == c[0]) flag = 1;
    if (s[1] == c[1]) flag = 1;
    if (s[0] == d[0]) flag = 1;
    if (s[1] == d[1]) flag = 1;
    if (s[0] == e[0]) flag = 1;
    if (s[1] == e[1]) flag = 1;
    if (flag) printf("YES");
    else printf("NO");
    return 0;
}