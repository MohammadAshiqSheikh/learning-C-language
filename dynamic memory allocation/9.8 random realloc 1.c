#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  printf("welcome to the world of dynamic randoms\n");
  int *arr = (int*) calloc(10,sizeof(int));
  if(arr == NULL)
  {
    printf("memory Error!!!");
    return 1;
  }
  srand(time(NULL));
  for (int i = 0; i < 10; i++)
  {
    arr[i] = rand() % 100;
  }
  printf("\n here are your random number: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d", arr[i]);
  }

  int *shrink = (int*) realloc(arr, 5*sizeof(int));
  if (shrink == NULL)
  {
    printf("memory Error!!");
    free(arr);
    arr = NULL;
    return 1;
  }
  arr = shrink;
  printf("\n here are your random number: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d", arr[i]);
  }
  free(arr);
  arr = NULL; 

  return 0;
}