#include<stdio.h>
int main(){
 float first,second;
 char opr;
 printf("welcome to operator calculator\n");
 printf(" please enter a first number:");
 scanf("%f",&first);
 printf(" now enter a second number:");
 scanf("%f",&second);
 printf("now choice the operator:(+,-,*,/):");
 scanf(" %c",&opr);

float res;
int invalid = 0 ;
 switch (opr)
 {
 case '+': res = first + second;
  break;
  case '-': res = first - second;
  break;
  case '*': res = first * second;
  break;
  case '/': res = first / second; 
  break;
 default:
 invalid = 1;
  break;
 }
  if (invalid == 0 )
  {
printf("result is ready  is :%.2f", res);
  }
else {
   printf("invaild operator ,please choice operator :(+,-,*,/)"); 
    }
   
  return 0;
}