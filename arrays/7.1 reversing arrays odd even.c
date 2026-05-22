#include<stdio.h>
void swap(int *first, int *second);
void reverse(int arr[], int size);
void print_array(int arr[], int size);

int main()
{
  printf("welcome to reversing arrays\n");
  int arr1[] = {1, 2, 5, 7, 8, 9, 4, 5};
  int arr2[] = {1, 2, 3, 4, 5};


  printf("\nreversed arrays ");
  print_array(arr1, 8);
  reverse(arr1, 8);
  printf("after reversing arr1 ");
  print_array(arr1, 8);

printf("\nreversing arr2 ");
  print_array(arr2, 5);
  reverse(arr2, 5);
  printf("after reversing arr2 ");
  print_array(arr2, 5);

  return 0;
}

void reverse(int arr[],int size)
{
  for (int i = 0; i < size / 2; i++)
  {
    swap(&arr[i], &arr[size - i - 1]);
  }
}

void swap(int *first, int *second)
{
  int temp = *first;
  *first = *second;
  *second = temp;
}

void print_array(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}




