#include<stdio.h>

int is_palindrome(int arr[], int size);


int main()
{
  int arr1[9] = {1, 2, 5, 7, 8, 9, 4, 5, 1};
  int arr2[4] = {1, 2, 3, 4};
  int arr3[5] = {1, 2, 3, 2, 1};

  printf("welcome to palindrome arrays\n");

  printf("\nresult for arr1 is %d ", is_palindrome(arr1, 9));
  printf("\nresult for arr2 is %d ", is_palindrome(arr2, 4));
  printf("\nresult for arr3 is %d ", is_palindrome(arr3, 5));
  return 0;
}

int is_palindrome(int arr[], int size)
{
  for (int i = 0; i < size / 2; i++)
  {
    if (arr[i] != arr[size - i - 1])
    {
      return 0;
    }
  }
  return 1;
}