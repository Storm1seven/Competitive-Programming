#include<stdio.h>
int min(int a[10], int n){
    int m = 10001, index;
    for(int i = 0; i < n; i++){
        if (a[i]<m){ m = a[i];index = i;}
    }
    return index+1;
}
int main(){
    int n, a[10], mn;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)scanf("%d", &a[i]);
    mn = min(a, n); 
    if (n == 1 || n == 2 && a[0] == a[1]) printf("-1");
    else printf("1\n%d\n", mn);
    return 0;
}