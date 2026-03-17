#include<stdio.h>
int main(){
  int first, second, temp;
  printf(" please enter  the first no: ");
  scanf("%d" ,&first);
  printf(" now enter  the second no: ");
  scanf("%d" ,&second);

  temp = first;
  first = second;
  second = temp;
  printf("the swapping is now %d \n %d ",first,second);




  return 0;
}