#include<stdio.h>

void change(int*);

int main(){
         int i = 100;
         printf("The current value of i is %d\n", i);
         change(&i);
         printf("The changed value of i is %d", i);
         return 0;
}

void change(int* a){
       *a = (*a) * 10;
}