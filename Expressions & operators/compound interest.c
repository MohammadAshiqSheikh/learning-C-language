#include<stdio.h>
#include<math.h>
int main(){

  float principal,time,rate;
  printf(" wel come compound interest calculator:\n");
  printf("please enter a intrest principal: ");
  scanf("%f",&principal);
  printf("please enter a intrest time: ");
  scanf("%f",&time);
  printf("please enter a intrest rate: ");
  scanf("%f",&rate);
   float  interest = principal * pow(( 1 + rate /100 ), time);
   printf(" now  compound interest %.2f" ,interest);

  return 0;
}