#include<stdio.h>

void averAndsum(float, float, float *, float *);

int main(){
    float a = 10;
    float b = 20;
    float sum;
    float aver;  
    averAndsum(a, b, &sum, &aver);
    printf("The value of sum is %f and the value of aver is %f\n", sum, aver);
}

void averAndsum(float a, float b, float *ptr1, float *ptr2){
       *ptr1 = a + b;
       *ptr2 = (a + b) / 2;
}