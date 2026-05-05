#include<stdio.h>
int main(){
int num;
printf("welcome to printing tables\n");
printf("enter the number whose table you want to print\n");
scanf("%d", &num);

for(int i=1; i<=10; i++){
    printf("%d x %d = %d\n", num, i, num*i);
}
  return 0;
}