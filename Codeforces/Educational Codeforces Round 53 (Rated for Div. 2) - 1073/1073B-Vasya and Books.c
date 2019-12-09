#include<stdio.h>
int main(){
    int n, current;
    scanf("%d", &n);
    int a[n], b[n], d[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < n; i++){
        d[a[i]] = i;
    }
    current = 0;
    for (int i = 0; i < n; i++){
        if ((d[b[i]]+1)>current){
     printf("%d ", d[b[i]]+1 - current);
     current = d[b[i]]+1;
 }
 else printf("0 ");
    }
    return 0;
}