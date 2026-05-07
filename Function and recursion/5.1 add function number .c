#include <stdio.h>

int add(int, int, int, int);

int main()
{
  int a, b, c, d;
  printf("welcome to Adding four numbers\n");
  printf("please enter a four number: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int result = add(a, b, c, d);
  printf("the answer is  %d", result);

  return 0;
}

int add(int a, int b, int c, int d)
{
  int sum = a + b + c + d;
  return sum;
}