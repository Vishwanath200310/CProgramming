#include<stdio.h>
#include<string.h>

char func(char* ptr1, char* ptr2)
{
       strcpy(ptr2,ptr1);
}
void main(){
    char s1[20] = "hello world";
    char s2[20];
     func(s1,s2);
     printf("%s", s2);
}