#include<stdio.h>

int sum(int a, int b);

int main(){
   int a = 10;
   int b = 10;
   printf("the area of the circle is %d", sum( a , b));
    return 0;
}

int sum(int a, int b){
    return a * b;
}
