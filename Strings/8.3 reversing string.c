#include<stdio.h>
#include<string.h>

void reverse_string(char str[]);

int main()
{
  char text[100];
  printf("welcome to reversing a string\n");
  printf("enter a string: ");
  fgets(text, sizeof(text), stdin);

  puts("original string:");
  puts(text);
  reverse_string(text);
  puts("reversed string:");
  puts(text);
  return 0;
}

void reverse_string(char str[])
{
  int length = strlen(str);
  char temp;
  for (int i = 0; i < length / 2; i++)
  {
    temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
  }
}