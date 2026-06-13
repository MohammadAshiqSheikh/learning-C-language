#include<stdio.h>

int main()
{
  printf("welcome to the world of reading and writing\n");
  FILE *file = fopen("data.txt","r+" );
  if (!file)
  {
    printf("Error opening file.");
    return 1;
  }
  char buffer[100];
  fgets(buffer, 100, file);
  printf("reading from file i found: %s", buffer);

  fseek(file, 0, SEEK_END);
  fputs("\nThis message was written by program", file);

  fclose(file);
  file = NULL;
  return 0;
}