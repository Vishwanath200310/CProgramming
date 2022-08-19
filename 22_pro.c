#include<stdio.h>
void func(int*);

int main(){
    int i = 3;
    func(&i);
    printf("The address i is %u\n", &i);
    printf("The value  of i is %d\n", *(&i));
    return 0;
}

void func(int* ptr){
       printf("The address of ptr is %u\n", ptr);
}
   