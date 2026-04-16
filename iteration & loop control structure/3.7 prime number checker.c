#include<stdio.h>
int main(){
 int num;
 printf("welcome to prime number checker\n");
 printf("please enter a number: ");
 scanf("%d",&num);
  
 for(int i = 2 ; i < num; i++)
    if ( num % i == 0) 
    {
      printf(" %d is not a prime number",num);
      return 0 ;

    }
      printf("%d is a prime number",num);

  return 0;
}