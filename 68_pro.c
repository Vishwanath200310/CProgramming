#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    char ch;
    while (ch != EOF)
    {   ch = fgetc(ptr);
        if(ch != EOF)
        printf("The charcter is %c\n", ch);
    }
    return 0;
}