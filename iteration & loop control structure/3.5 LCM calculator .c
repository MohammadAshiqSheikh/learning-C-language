#include<stdio.h>
int main(){
  int first, second;
  printf("weLLcome  to  LCM calculator\n");
  printf("please Enter first Number:");
  scanf("%d",&first);
    printf(" Now Enter a second Number:");
  scanf("%d",&second);
  int min = first > second ? first : second;
  int max = first * second;
  
   for (int i = min; i <= max; i++)
   if( i % first == 0 && i % second == 0)
   {
    printf(" the LCM of %d and %d is %d" , first, second, i);
    break;
   }
  
  return 0;
}