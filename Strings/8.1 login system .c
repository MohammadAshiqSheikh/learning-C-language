#include<stdio.h>
#include<string.h>

int main()
{
  const char STORED_PASSWORD[] = "password123";
  char password[100];
  printf("welcome to secure system.\n\n");
  printf("enter your password: ");
  scanf("%s", password);
  // fgets(password, sizeof(password), stdin);

  if (strcmp(password, STORED_PASSWORD) == 0)
  {
    printf("login successful!\n");
  }
  else
  {
    printf("incorrect password.\n");
  }
  return 0;
}