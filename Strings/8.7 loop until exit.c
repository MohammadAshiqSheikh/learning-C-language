#include<stdio.h>
#include<string.h>

int main()
{
  const char EXIT[] = "exit";
  char command [20];
  printf("welcome to the command line\n");
  while (1)
  {
    printf("please enter your command: ");
    scanf("%s", command);
    if ( !strcmp(command, EXIT) )
    {
      printf("exiting the command line\n");
      break;
    }
  };
  printf("\n\nExited successfully\n ");
  return 0;

}