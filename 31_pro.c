#include<stdio.h>

int main(){
    int i = 5;
    int* ptr = &i;
    printf("the value of i is %d\n", i);
    printf("The value of ptr is %u\n", ptr);
    printf("the address of i is %u\n", &i);
    printf("The value of ptr after increment is %u\n", ptr);
    ptr = ptr + 1;
    printf("yhe %d\n", ptr - &i);
    
    if (ptr>&i)
    {
        printf("ptr is greater");
    }

    else{
        printf("ptr is not  greater ");
    }
    
    return 0;
}