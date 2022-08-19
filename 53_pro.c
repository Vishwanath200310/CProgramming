#include<stdio.h>

int main(){
    char s1[] = "Vishwa";
    for (int i = 0; i < 6; i++)
    {
        s1[i] = s1[i] - 1;
    }
    printf("The encrypted name is %s", s1);
    return 0;
}