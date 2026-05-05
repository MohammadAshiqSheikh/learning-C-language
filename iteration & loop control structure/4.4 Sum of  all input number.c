#include <stdio.h>
int main()
{
  int num;
  int sum = 0;
  printf("welcome to adder all input number\n");

  do
  {
    printf("please Enter a Number:");
    scanf("%d", &num);
    sum += num;
  } while (num != 0);
  printf("the sum of all input number is: %d", sum);

  return 0;
}