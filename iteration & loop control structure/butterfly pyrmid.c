  #include<stdio.h>
int main()
{
  int rows;
  printf("welcome to star pattern printing\n");
  printf("please enter the number of rows: ");
  scanf("%d", &rows);
  
  printf("\n\n here is the butterfly pyramid of stars:\n");
  for(int i = 1; i <= rows; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    for (int k = 0; k < 2 * (rows - i); k++)
    {
      printf("  ");
    }
    for( int j = 0 ; j < i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  for(int i = rows; i >= 1; i--)
  {
    for(int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    for (int k = 0; k < 2 * (rows - i); k++)
    {
      printf("  ");
    }
    for( int j = 0 ; j < i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

