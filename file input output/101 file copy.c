#include<stdio.h>

int main()
{
  printf("welcome to file copying\n");
  FILE *source_file = fopen("ashuclicks01.txt","r");
  FILE *dest_file = fopen("copy.txt", "w");

  if (source_file == NULL || dest_file == NULL)
  {
  printf("Error while opening file.");
  return 1;
  }
  // Infinite loop
  while (1)
  {
    char c = fgetc(source_file);
    if (c == EOF) break;
    fputc(c, dest_file);
    printf(".");

  }
  fclose(source_file);
  fclose(dest_file);
  dest_file = source_file = NULL;
  return 0;
}