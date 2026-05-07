#include<stdio.h>

float get_average(int, int, int, int);

int main(){
  int a, b, c, d;
  printf("welcome to calculating average of four numbers\n");
  printf("please enter a four number: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("the average is: %.2f", get_average(a, b, c, d));
  return 0;
}

float get_average(int a, int b, int c, int d){
  float average = (a + b + c + d);
  return average / 4;
}