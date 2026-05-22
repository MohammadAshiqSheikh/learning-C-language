#include<stdio.h>

void delete (int arr[],int size,int new_arr[], int *new_size, int element);
void print_arr(int arr[], int size);

int main()
{
  printf("welcome to deleting an element in an array\n");
  int arr[8] = {1,2,3,4,5,6,7,8};
  printf("the original array is:\n");
  print_arr(arr, 8);
  int new_arr[8];
  int new_size;

  delete(arr, 8, new_arr, &new_size, 5);
  printf("\n\nthe arrays after deleting the element 5 is:\n");
  print_arr(new_arr, new_size);

  delete(arr, 8, new_arr, &new_size, 8);
  printf("\n\nthe arrays after deleting the element 8 is:\n");
  print_arr(new_arr, new_size);


  delete(arr, 8, new_arr, &new_size, 2);
  printf("\n\nthe arrays after deleting the element 2 is:\n");
  print_arr(new_arr, new_size);


  delete(arr, 8, new_arr, &new_size, 3);
  printf("\n\nthe arrays after deleting the element 3 is:\n");
  print_arr(new_arr, new_size);
}
  void print_arr(int arr[], int size)
  {
    for (int i = 0; i < size; i++)
    {
      printf("%d ", arr[i]);
    }
  }

  void delete (int arr[],int size,int new_arr[], int *new_size, int element)
  {
    int j = 0;
    for (int i = 0; i < size; i++)
    {
      if (arr[i] != element)
      {
        new_arr[j] = arr[i];
        j++;
      }
    }
    *new_size = j;
  }
