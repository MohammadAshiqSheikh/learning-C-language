#include <stdio.h>

int square(int num);

int main()
{
  int num;
  printf("welcome to square function\n");
  printf("please enter a number: ");
  scanf("%d", &num);

  printf("the square of %d is %d", num, square(num));
  return 0;
}

int square(int num)
{
  return num * num;
}