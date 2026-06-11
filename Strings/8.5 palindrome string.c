#include <stdio.h>
#include <string.h>

int is_palindrome(char arr[]);

int main()
{
  char text[20];
  printf("welcome to palindrome string checker\n");
  printf("Now' Enter your string: ");
  scanf("%s, text");

  if (is_palindrome(text))
  {
    puts("your input is palindrome");
  }
  else
  {
    puts("your input is not palindrome");
  }
  return 0;
}
int is_palindrome(char arr[])
{
  int len = strlen(arr);
  for (int i = 0; i < len / 2; i++)
  {
    if (arr[i] != arr[len - i - 1])
    {
      return 0;
    }
  }
  return 1;
}