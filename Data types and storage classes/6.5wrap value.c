#include<stdio.h>
#include<limits.h>


int main(){
unsigned int positive = UINT_MAX;
int normal = INT_MAX;
printf("unsigned int max: %u\n", positive);
printf("int max: %d\n", normal);


positive++;
normal++;
printf("unsigned int after overflow: %u\n", positive);
printf("int after overflow: %d\n", normal);
return 0;
}