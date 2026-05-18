#include<stdio.h>

void min_max(int*,int*,int*,int*);

int main(){
  int first , second, min ,max;
  printf("welcome to findingmin and max using pointers");
  printf("\nenter the first number : ");
  scanf("%d",&first);
  printf("enter the second number : ");
  scanf("%d",&second);
  min_max(&first,&second,&min,&max);
  printf("between %d and %d, the minimum is %d and the maximum is %d",first,second,min,max);
  return 0;
}
void min_max(int *a, int*b, int *min, int *max){
  if(*a < *b){
    *min = *a;
    *max = *b;
  }
  else{
    *min = *b;
    *max = *a;
  }
}