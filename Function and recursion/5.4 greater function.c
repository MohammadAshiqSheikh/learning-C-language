#include<stdio.h>
float max (float,float);

int main(){
  float a,b;
  printf("welcome to finding the max element\n");
  printf("enter the first number\n");
  scanf("%f",&a);
  printf("enter the second number\n");
  scanf("%f",&b);
  printf("the maximum number is %.2f\n",max(a,b));
  return 0;
}

float max (float first,float second)
{
  return first > second ? first : second;
  
}