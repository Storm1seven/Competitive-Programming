#include<stdio.h>
int main(){
    int n, p;
 scanf("%d",&n);
 char a[n];
 scanf("%s",a);
 p=n-1;
 for(int i=n-1;i>=1;i--){ 
  if(a[i]<a[i-1])p=i-1;
 }
 for(int i=0;i<n;i++){
  if(i!=p) printf("%c",a[i]);
 }
 return 0;
}
  