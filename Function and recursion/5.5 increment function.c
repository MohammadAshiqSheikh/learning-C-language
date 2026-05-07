#include<stdio.h>

void increment(int);

int main(){
int  num;
printf("welcome to increment function showing call by value\n");
printf("\nplease enter a number to increment: ");
scanf("%d",&num);

printf("\nbefore: value of num is %d",num);
increment(num);
printf("\nafter: value of num is %d",num); 
return 0;

}
void increment(int num){
  printf("\n in function before: value of num is %d",num);
  num++;
  printf("\n in function after: value of num is %d",num);
}