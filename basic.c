#include <stdio.h>

int main(){

int num = 90;
int *poin = &num;

printf("the value of num: %d\n", num);
printf("the value of num: %d\n", *poin);
printf("the address of num: %p\n", &num);
printf("the address of num: %p\n", poin);

return 0;
}
