#include<stdio.h>
#include<stdlib.h>

typedef struct {
  int x;
  int y;
}point;

void input_point(point*);
void show_point(point*);


int main()
{
  printf(" welcome to dynamic points\n");
  point *start = (point*) malloc(sizeof(point));
  point *end = (point*) malloc(sizeof(point));
  if (start == NULL || end == NULL)
  {
    printf("memory issues !!!!");
    return 1;
  }
  printf("\n please enter the details for starting point of your line: ");
  input_point(start);
  printf("\nnow enter the details for ending point of your line ");
  input_point(end);

  printf("now here are your details");
  show_point(start);
  show_point(end);

  free(start);
  free(end);
  start = end = NULL;
  return 0;

}

void input_point(point *point)
{
  printf("\nEnter x coordinate: ");
  scanf("%d", &point->x);
  printf("Enter y coordinate: ");
  scanf("%d, &point->y");

}

void show_point(point *point)
{
  printf("\ncoordinte(%d, %d)", point->x, point->y);
}