#include<stdio.h>

double average(float , float , float );
int main(){
     printf("the average is %f", average(1,4,3));
    return 0;
}

double average(float a, float b, float c){
    return ( a + b + c ) / 3 ;
}