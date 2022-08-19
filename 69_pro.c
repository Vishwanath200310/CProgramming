#include<stdio.h>
#include<malloc.h>

int main(){
    int * ptr;
    ptr = (int *) malloc(30 * sizeof(int));
    //free(ptr);
    realloc (ptr, 3 * sizeof(int));
    ptr[0] = 45;
    printf("%d",ptr[0]);
    return 0;
}