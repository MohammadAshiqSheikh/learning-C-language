#include<stdio.h>
int main(){
  int age ;
 printf(" well come to   age group calculator\n");
 printf("please enter your age :");
 scanf("%d",&age);
 if (age  < 13)
 {
  printf(" you are a child");
 }
   else if  (age < 20)
 {
  printf(" you are a teen");
 }
  else if  (age < 60)
 {
  printf(" you are an adult");
 }
    else 
 {
  printf(" you are a senior");
 }
  
  return 0;
}