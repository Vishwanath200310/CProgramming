#include<stdio.h>
int sum(int, int);
int main(){
    int x = 5;
    int y = 4;
    printf("the value of x + y is %d\n", sum(x, y));//function call
    printf("The value of x and y is %d  and %d ", x, y);
    return 0;
} // we cannot change the value of one's function in other function.

int sum(int a, int b){ // function definition 
    a = 10;
    b = 10;
    return a + b;
}