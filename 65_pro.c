#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("ile.txt", "r");
    if (ptr == '\0')
    {
       printf("The file is null");
    }
    else if (ptr != '\0')
    {
        printf("The file is not null");
    }
    return 0;
}