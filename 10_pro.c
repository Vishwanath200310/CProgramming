#include<stdio.h>

int main(){
    int sum = 0;
    for (int i = 1;  i< 11; i++)
    {
        sum = sum + i*8;
        printf("the sum of the natural number is %d\n", sum);
    }
     return 0;
}