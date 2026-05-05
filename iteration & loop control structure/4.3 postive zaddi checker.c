#include <stdio.h>
int main()
{
  int num;
  printf("welcome to  positive  number checker \n");

  do
  {
    printf("please Enter a positive Number:");
    scanf("%d", &num);
  } while (num < 0);
  printf("You have successfully Entered a positive number");

  return 0;
}