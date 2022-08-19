#include<stdio.h>
#include<string.h>


void main(){
    char  s2[6];
    printf("Enter the value used by c\n");
    for (int i = 0; i < 6; i++){
       scanf("%c", &s2[i]);
       fflush(stdin);
    }
     printf("The value of string by c is %s \n",s2);
}