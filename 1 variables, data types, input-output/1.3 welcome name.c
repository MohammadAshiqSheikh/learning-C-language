#include <stdio.h>
int main(){
  char name [20];
  printf("please enter your name");
  scanf(" %19s",name);
  printf("welcome %s to ashuclicks.", name);
  return 0;
}