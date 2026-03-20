#include<stdio.h>
int main(){
  int a,b,c,d;
 printf("enter a first side:");
 scanf("%d" ,&a);
  printf("enter a second side:");
 scanf("%d" ,&b);
  printf("enter a third side:");
 scanf("%d" ,&c);
  printf("enter a fourth side:");
 scanf("%d" ,&d);
 int perimeter =a+b+c+d;
 printf("\n now perimeter of rectangle:%d",perimeter);


  return 0;
}