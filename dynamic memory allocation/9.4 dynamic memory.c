#include<stdio.h>
#include<stdlib.h>

struct car
{
  char make[25];
  char model[25];
  int year;
  char color[15];

};
typedef struct car Car;

void print_car(Car *car);

int main()
{
  printf("welcome to our dynamic island.\n");
  Car *my_car = (Car*)malloc(sizeof(Car));

if (my_car == NULL)
  {
    printf("memory allocation failed.\n");
    return 1;
  }

  printf("please enter your model of car: ");
  scanf("%s", my_car->model);
  printf("please enter your company of car: ");
  scanf("%s", my_car->make);
  printf("please enter the color of your car: \n");
  scanf("%s", my_car->color);
  printf("please enter the year of your car: ");
  scanf("%d", &my_car->year);

  printf("\n\n here is the information of your car: ");
  print_car(my_car);
  free(my_car);
  my_car = NULL;



  return 0;
}


void print_car(Car *car)
{
  printf("this %s model of car, which is of %s color, was purchased in %d year, and is made by %s company.\n", car->model, car->color, car->year, car->make);
}
