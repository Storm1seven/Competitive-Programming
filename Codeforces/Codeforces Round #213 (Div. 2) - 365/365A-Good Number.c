#include<stdio.h>
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[10], count = n;
    for(int _ = 0; _ < n; _++){
        for(int i = 0; i < 10; i++) a[i] = 0;
        long long p;
        scanf("%lld", &p);
        while(p>0){
            a[p%10]++;
            p/=10;
        }
        for(int i = 0; i<=k; i++){
            if (a[i] == 0){
                count--;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}