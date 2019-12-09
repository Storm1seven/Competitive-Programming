#include<stdio.h>
#include<string.h>
int main()
{ 
 int n;
 scanf("%d", &n);
 char s[n];
    scanf("%s", s);
    int count = 0, m = 0;
    for(int i = 0; i< n; i++){
  if (s[i] == 'x') count++;
  else{
   if (count > 2) m+=count-2;
   count = 0;
  }
 }
 if (count > 2) m += count-2;
 printf("%d", m);
    return 0;
}