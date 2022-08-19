#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    char ch;
    fscanf(ptr ,"%c", &ch);
    printf("The character ch is %c", ch);
    int i;
    fscanf(ptr, "%d", &i);
    printf("The integer is %d", i);
    fclose(ptr);
    return 0;
}