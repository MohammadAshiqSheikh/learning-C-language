#include <stdio.h>

long long  factorial(int);

int main()
{
  int num;
  printf("welcome to factorial calculator\n");
  printf("enter a number to calculate its factorial: ");
  scanf("%d", &num);

  long long result = factorial(num);
  printf("the factorial of %d is %lld\n", num, result);
  return 0;
}

long long factorial(int num)
{
  if (num <= 1)
  {
    return 1;
  }
  return num * factorial(num - 1);
}