#include<stdio.h>

int main(){
    int i = 71;
    int *j = &i;
    int **k = &j;
    printf("the address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", i);
    printf("The address of j is %u\n", &j);
    printf("The address of j is %u\n", k);
    printf("The value of j is %d\n", *k);
    printf("The value of j is %d\n", j);
    return 0;
}