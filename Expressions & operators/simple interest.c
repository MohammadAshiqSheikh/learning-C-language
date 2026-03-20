#include<stdio.h>
int main(){
  int princple,time,rate;
  printf(" wel come simple interest calculator:\n");
  printf("please enter a intrest princple: ");
  scanf("%d",&princple);
  printf("please enter a intrest time: ");
  scanf("%d",&time);
  printf("please enter a intrest rate: ");
  scanf("%d",&rate);
   int  interest= princple * time * rate /100.00;
   printf(" now interest %d" ,interest);

  return 0;
}