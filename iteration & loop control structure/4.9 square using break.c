#include<stdio.h>
int main()
{
  int num;
  printf("welcome to square program\n");
  while (1){
  printf("enter a number: \n"); 
  scanf("%d", &num);
  if (num == -1) break;
  printf("the square of %d is: %d\n", num, num*num);
}
printf(" bye bye! see you later\n");
return 0;
}