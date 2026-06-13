#include<stdio.h>
#include<stdlib.h>

int main()
{
  int size;
  printf("welcome to our world of dynamic array\n");
  printf("please enter the number of elements: ");
  scanf("%d", &size);

  float *arr = (float*) malloc(size * sizeof(float));
  if (arr == NULL)
  {
    printf("memory allocation failed\n");
    return 1;
  }


  for (int i = 0; i < size; i++)
  {
    printf("Now enter the no. of element %d:  ", (i + 1));
    scanf("%f", &arr[i]);
  }

  printf("\n here are your elements: ");
  for(int i = 0; i < size; i++)
  {
    printf("%.2f ", arr[i]);
  }


  free(arr);
  arr = NULL;
  return 0;


}
