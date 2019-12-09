#include<stdio.h>
int main(){
    long long t, n, x, y, d, count1, countn;
    scanf("%lld", &t);
    for(long long i = 0; i<t; i++){
        scanf("%lld%lld%lld%lld", &n,&x,&y,&d);
        if((abs(x-y)%d)==0) printf("%lld\n", abs(x-y)/d);
        else{
            count1 = (x-1)/d;
            countn = (n-x)/d;
            if ((x-1)%d) count1+=1;
            if ((n-x)%d) countn+=1;
            if ((y-1)%d == 0) count1+=(y-1)/d;
            else count1 = 10000000000;
            if ((n-y)%d == 0) countn+=(n-y)/d;
            else countn = 10000000000;
            if (count1 == 10000000000 && countn == 10000000000) printf("-1\n");
            else {
                if (count1 < countn) printf("%lld\n", count1);
                else printf("%lld\n", countn);
            }
        }
    }
    return 0;
}