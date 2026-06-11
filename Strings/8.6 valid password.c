#include <stdio.h>
#include <string.h>

int main()
{
  const char STORED_PASSWORD[] = "password123";
  char password[20];
  printf("welcome to secure system\n");
  do
  {
    printf("enter your correct password: ");
    scanf("%s", password);
  } while (strcmp(password, STORED_PASSWORD) != 0);
  printf("access granted\n");
  return 0;
}
