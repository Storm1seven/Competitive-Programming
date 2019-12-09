#include<stdio.h>
#include<string.h>
char key[] = "aeiou";
int isVowel(char a){
 for(int i = 0; i < 5; i++){
  if (a == key[i]) return 1;
 }
 return 0;
}
int main(){
 char s[1001], t[1001];
 scanf("%s", s);
 scanf("%s", t);
 int l = strlen(s);
 int r = strlen(t);
 if (l == r){
  int flag = 1;
  for(int i = 0; i < l; i++){
   if (isVowel(s[i]) == 1 && isVowel(t[i]) == 0) flag = 0;
   else if (isVowel(s[i]) == 0 && isVowel(t[i]) == 1) flag = 0;
  }
  if (flag) printf("Yes");
  else printf("No");
 }
 else printf("No");
 return 0;
}