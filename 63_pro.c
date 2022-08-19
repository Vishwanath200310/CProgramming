#include<stdio.h>

struct complex{
    float a;
    float b;
};

int main(){
    struct complex c1 = {4.5, 6.7};
    struct complex c2 = {6.8, 7.9};
    printf("%f + %fi\n", c1.a, c1.b);
    printf("%f + %fi", c2.a, c2.b);
    return 0;
}