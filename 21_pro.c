#include<stdio.h>

int swap(int*, int*);

int main(){
    int a = 5;
    int b =7;
    printf("before the swap a and b is % d and  %d\n", a, b);
    swap(&a, &b);
    printf("After the swap a and b is %d and %d\n", a, b);
    return 0;
}

int swap(int* a, int* b){
    int temp;
    temp = *a; // a=5,temp= 5, b =7
    *a = *b;   // a=7,temp=5, b=7
    *b = temp; // a=7, temp=5, b=5
}