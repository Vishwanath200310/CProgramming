#include<stdio.h>

void chang(int*);

int main(){
    int i = 10;
    printf("The actual value of i is %d\n", i);
    chang(&i);
    printf("The changed value of i is %d\n",i);
    return 0;
}

void chang(int *a){
      *a = (*a) * 10 ;
}