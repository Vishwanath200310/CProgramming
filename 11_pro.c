#include<stdio.h>

int main(){
       int factorial = 1;
       int n;
       printf("enter the number\n");
       scanf("%d", &n);
    for (int i = 1;  i<=n; i++)
    {
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}