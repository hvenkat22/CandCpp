#include <stdio.h>

int main(void) {
  char str[100], str2[100];
  int flag=0;
  scanf("%s",&str);
  for(int i=strlen(str); i>0; i--){
    str2[i]=str[i];
  }
  for(int i=0; i<strlen(str); i++){
    if(str2[i] != str[i]){
      flag=1;
      break;
    }
  }
  if(flag==0){
    printf("The given string is a palindrome");
  } else{
    printf("The given string is not a palindrome!");
  }
}