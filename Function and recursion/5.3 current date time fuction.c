#include <stdio.h>
#include <time.h>
void print_date();

int main()
{
  print_date();
  return 0;
}

void print_date()
{
  time_t t;
  time(&t);

  char *dt = asctime(localtime(&t));
  printf("current date and time is: %s", dt);
}