#include<stdio.h>
#include<stdlib.h>

int main(){
    int * ptr;
    int n;
    printf("Enter the value\n");
    scanf("%d", &n);
    ptr = (int *) calloc(n ,sizeof(int));
    ptr[0] = 56;
    ptr[2] = 65;
    printf("%d", ptr[2]);
    return 0;
}