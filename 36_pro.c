#include<stdio.h>

int main(){
    int arr[10];
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = a * (i+1);

       printf("The multipilcation of %d x %d = %d\n", a, i+1, arr[i]);
    }
    return 0;
}