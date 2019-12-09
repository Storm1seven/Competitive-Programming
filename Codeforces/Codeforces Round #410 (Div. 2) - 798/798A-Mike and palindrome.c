#include<stdio.h>
#include<string.h>
int main(){
    char s[15];
    scanf("%s", s);
    int count = 0;
    for(int i = 0; i < strlen(s)/2; i++){
        if (s[i] != s[strlen(s)-1-i]) count++;
    }
    if (count > 1) printf("NO");
    else if (count == 0 && strlen(s)%2 == 1) printf("YES");
    else if (count == 0 && strlen(s)%2 == 0) printf("NO");
    else printf("YES");
    return 0;
}