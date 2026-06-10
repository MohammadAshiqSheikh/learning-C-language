#include <stdio.h>
int sum(int arr[][3], int rows, int cols);

// return no of occurrences
int main()
{
  printf("welcome to sum and average in 2D array \n");
  int arr[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {1, 2, 3}};

  int addition = sum(arr, 3, 3);
  float avg = addition / 9.0;
  printf("\n sum is %d and Average is %.2f",addition, avg);
  return 0;
}
int sum(int arr[][3], int rows, int cols)
{
  int sum = 0;
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
    
      sum += arr[i][j];
    }
  }
    return sum;
  }