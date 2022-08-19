#include<stdio.h>

void variable(int *);

int main(){
    int i;
    printf("the address of i is %u\n", &i);
    variable(&i);
    printf("The value of i is %d", i);
    return 0;
}

void variable(int *a){
       *a = 10;
}