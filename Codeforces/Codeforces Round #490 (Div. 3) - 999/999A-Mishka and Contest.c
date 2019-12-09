#include<stdio.h>
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n; i++){
        if (a[i] <= k) a[i] = 0;
        else break;
    }
    for(int i = n-1; i>-1; i--){
        if (a[i] <= k) a[i] = 0;
        else break;
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        if (a[i] == 0) count++;
    }
    printf("%d", count);
    return 0;
}