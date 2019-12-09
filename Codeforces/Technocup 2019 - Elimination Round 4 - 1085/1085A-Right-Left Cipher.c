#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
 int i, j, count;
 char t[50], s[50];
 scanf ("%s", t);
 int n = strlen (t);
 if (n == 1){
  printf ("%s", t);
  return 0;
 }
 count = 0;
 if (n % 2 == 0){
  i = n / 2 - 1;
  j = n / 2;
 }
 else{
  i = n / 2;
  j = n / 2 + 1;
 }
 while (count < n){
  if (count % 2 == 0) s[count++] = t[i--];
  else s[count++] = t[j++];
  }
 for (i = 0; i < n; i++) printf ("%c", s[i]);
 return 0;
}