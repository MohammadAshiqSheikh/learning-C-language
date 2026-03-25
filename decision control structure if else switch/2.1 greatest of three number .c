#include<stdio.h>
int main(){
 int first , second , third;
 printf("please enter a first number.");
 scanf("%d",&first); 
 printf("now  enter a second number.");
 scanf("%d",&second); 
 printf("now enter a third number.");
 scanf("%d",&third);

 if (first > second &&  first > third)
 {
  printf( "%d number is a greatest:",first);
 }
 else if( second > third)
 {
  printf("%d number is a greatest:" ,second);
 }
 else{
  printf("%d number is a greatest:" ,third);
 }


  return 0;
}