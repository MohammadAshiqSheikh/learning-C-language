#include<stdio.h>
int main(){
  const float KILOMETER_TO_MILE = 0.621371;
  long kms;
  printf("welcome to kilometer to miles converter\n.");
  printf("Enter distance in kilometers: ");
  scanf("%ld",&kms);

  long miles = kms * KILOMETER_TO_MILE;
  printf("%ld kilometers is equal to %ld miles",kms,miles); 
  return 0;
}