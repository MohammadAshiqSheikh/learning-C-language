#include <stdio.h>

int is_sorted(int arr[], int size);

int main()
{
  printf("welcome to checking if arrays is sorted\n");
  int arr1[6] = {5, 10, 15, 20, 25, 30}; // increasing order
  int arr2[6] = {30, 25, 20, 15, 10, 5}; // decreasing order
  int arr3[6] = {5, 10, 15, 20, 15, 30}; // not sorted

  if (is_sorted(arr1, 6))
  {
    printf("arr1 is sorted\n");
  }
  else
  {
    printf("arr1 is not sorted\n");
  }
  if (is_sorted(arr2, 6))
  {
    printf("arr2 is sorted\n");
  }
  else
  {
    printf("arr2 is not sorted\n");
  }
  if (is_sorted(arr3, 6))
  {
    printf("arr3 is sorted\n");
  }
  else
  {
    printf("arr3 is not sorted\n");
  }
  return 0;
}
  int is_sorted(int arr[], int size)
  {
    int increasing = 1;
    int decreasing = 1;

    for (int i = 1; i < size; i++)
    {
      if (arr[i] > arr[i - 1])
      {
        decreasing = 0;
      }
      else if (arr[i] < arr[i - 1])
      {
        increasing = 0;
      }
    }
    return increasing || decreasing;
  }
