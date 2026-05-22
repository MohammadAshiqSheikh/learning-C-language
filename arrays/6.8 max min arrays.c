#include <stdio.h>

int main()
{
  int arr[10];
  printf("welcome to max and min of arrays\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Please Enter a value %dth elements: ",(i + 1));
    scanf("%d",&arr[i]);
  }

  int max = arr[0];
  int min = arr[0];
  for (int i = 1; i < 10; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
    if (min > arr[i])
    {
      min = arr[i];
    }
    printf("max is %d and min is %d\n",max,min);
    return 0;
  }
}    