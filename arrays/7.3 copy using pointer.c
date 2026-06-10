#include <stdio.h>

void copy_arr(char arr[], int size, char new_arr[]);
void print_arr(char arr[], int size);

int main()
{
  char arr[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', '\0'};
  char new_arr[9];

  printf("welcome to copy array using pointer arrays\n");
  printf("\noriginal char arrays: ");
  print_arr(arr, 9);
  copy_arr(arr, 9, new_arr);
  printf("\ncopied char arrays: ");
  print_arr(new_arr, 9);
  return 0;
}

void copy_arr(char *arr, int size, char *new_arr)
{
  for (int i = 0; i < size; i++)
  {
    *(new_arr + i) = *(arr + i);
  }
}


void print_arr(char arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%c", arr[i]);
  }
}