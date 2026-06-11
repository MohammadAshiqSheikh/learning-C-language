#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
  char text[100];
  printf("welcome to uppercase string program\n");
  printf("enter a text: ");
  fgets(text, sizeof(text), stdin);

  // for (int i = 0; text[i]; i++)
    for (int i = 0; i < strlen(text); i++)
    {
      text[i] = toupper(text[i]);
    }
  printf("uppercase string: %s", text);
  return 0;
}