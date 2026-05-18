#include <stdio.h>

int main()
{
  char character;
  char *ptr = &character;
  printf(" welcome to showcasing character pointer in c \n");
  printf(" Enter the value of char:\n");
  scanf("%c", ptr);
  printf(" \nthe value of char is %c \n", character);
  printf(" the address of char is %c \n", *ptr);

  return 0;
}