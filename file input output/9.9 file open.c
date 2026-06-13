#include<stdio.h>

int main()
{
  char filename[100];
  printf("welcome to file opening tool\n");
  printf("please Enter the file name: ");
  scanf("%99s",filename);

  FILE *file = fopen(filename, "r");
  if (file != NULL)
  {
    printf("\n%s was opened successfully", filename);
    fclose(file);
  }
  else{
    printf("\n File was not found. ");

  }

  return 0;

}