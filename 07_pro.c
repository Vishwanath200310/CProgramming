#include<stdio.h>

void sum(int, int);

int main(){
    int x = 5;
    int y = 4;
    sum(x,y);
    printf("The address of x and y is %u and %u\n ", &x, &y);
    return 0;
} 

void sum(int a, int b){ 
    a = 10 , b = 10;
       printf("the adresses  of x and y is %d and %d", a, b);
}