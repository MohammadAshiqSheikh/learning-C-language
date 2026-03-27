#include<stdio.h>
int main(){
  int marks;
 printf(" well come to  grade calculator\n");
 printf("please enter the marks:");
 scanf("%d",&marks);
 if (marks > 90)
 {
  printf(" you have  got  A grade");
 }
   else if  (marks > 75)
 {
  printf(" you have  got  B grade");
 }
  else if  (marks > 60)
 {
  printf(" you have  got  C grade");
 }

  else if  (marks > 30)
 {
  printf(" you have  got  D grade");
 }

  else 
 {
  printf(" you have fail in  exam  F grade");
 }

 



  return 0;
}