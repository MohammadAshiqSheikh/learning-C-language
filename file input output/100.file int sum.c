#include<stdio.h>

int main()
{
const char filename[] = "number.txt";
FILE *file = fopen(filename, "r");
if (file == NULL)
{
  printf("\n File could not be opened");
  return 1;

}
int temp;
int sum = 0;
int read_status;
do
{
  read_status = fscanf(file, "%d", &temp);
  sum += temp;

}
while (read_status == 1);

  printf("\n The sum of all number is : %d", sum);
  fclose(file);
  file = NULL;

  return 0;
}