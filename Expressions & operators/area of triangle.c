#include<stdio.h>
int main(){
  int b,h;
  printf("welcome to calculate a traingle of area: \n ");
  printf("now enter a breadth: ");
  scanf("%d",&b);
   printf("now enter a length: ");
  scanf("%d",&h);
  float area =0.5 * b * h;
  printf("\n now solve area of triangle: %2.f" ,area);

  return 0;
}