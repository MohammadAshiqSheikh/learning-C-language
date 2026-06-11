#include<stdio.h>
int main(){
char name[25];
printf("welcome to showing how to use fgets and puts in c\n");
printf("Enter your full name: ");
fgets(name,sizeof(name),stdin);
printf("Your name is: ");
puts(name);
return 0;

}