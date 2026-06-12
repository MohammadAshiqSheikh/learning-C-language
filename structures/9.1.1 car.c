#include <stdio.h>

struct car
{
  char make[25];
  char model[25];
  int year;
  char color[15];
};

typedef struct car car;
void print_car(car *car);

int main()
{
  car ford = {.make = "Ford", .model = "Mustang", .year = 2020, .color = "Red"};
printf("welcome to the car showroom\n");
  print_car(&ford);
  
  return 0;
}
void print_car(car *car)
{
  printf("this %s model of car, which is of %s color, was purchased in %d year, and is made by %s company", car->model, car->color, car->year, car->make);
}