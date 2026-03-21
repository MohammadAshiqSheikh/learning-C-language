#include<stdio.h>
int main(){
 float  f; 
 printf("wel come to temperature converter \n");
 printf("please enter temp  fahrenheit:");
 scanf("%f", &f);
  float c = (f-32) * 5 / 9;
  printf("now solution is ready %.2f ", c);
  return 0;

}