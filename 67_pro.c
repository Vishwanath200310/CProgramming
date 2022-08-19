#include<stdio.h>


int main(){
    FILE *prt;
    prt = fopen("sample.txt", "r");
    char c = fgetc(prt);
    printf("The character is %c",c);
    return 0;
}