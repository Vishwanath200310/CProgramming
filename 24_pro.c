#include<stdio.h>
float sum(float, float);

float aver(float, float);

float main(){
    float a = 10;
    float b = 20;
    printf("The sum of two numbers is %f\n", sum(a , b) );
    printf("The average of two numbers is %f\n", aver(a, b));
    return 0;
}

float sum(float a, float b){
        return a + b;
}

float aver(float a, float b){
        return (a + b) / 2;
}