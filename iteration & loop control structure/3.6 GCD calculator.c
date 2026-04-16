#include<stdio.h>
int main() {
  int first, second;
  printf("weLLcome  to  LCM calculator\n");
  printf("please Enter first Number:");
  scanf("%d",&first);
    printf(" Now Enter a second Number:");
  scanf("%d",&second);
  int min = first > second ? first : second;
   for (int i = min; i >= 1; i--){
   if(first % i == 0  && second % i == 0)
   {
    printf(" the GCD of %d and %d is %d" , first, second, i);
    break;
   }
  }
  return 0;
}