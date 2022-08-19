#include<stdio.h>

struct employee{
    int a;
    float b;
};


int main(){
    struct employee v1 = {14, 36.5};
    struct employee *ptr = &v1;
    printf("%d\n", ptr->a);
    printf("%f", ptr->b);;
    return 0;
}