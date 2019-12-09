#include<stdio.h>
int main(){
    int n, flag=1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i<n; i++) scanf("%d", &a[i]);
    int i = 1;
    while (a[i-1] < a[i] && i<n)  i++;
    while (a[i-1] == a[i] && i< n) i++;
    while (a[i-1] > a[i] && i<n) i++;
    if (n ==1) printf("YES\n");
    else if (i == n) printf("YES\n");
    else printf("NO\n");
    return 0;
}