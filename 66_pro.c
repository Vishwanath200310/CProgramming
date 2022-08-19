#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("writefile.txt", "w");
    int i = 98;
    fprintf(ptr, "%d", i);
    fclose(ptr);
    return 0;
}