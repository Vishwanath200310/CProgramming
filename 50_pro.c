#include<stdio.h>
#include<string.h>
int mystr(char* ptr){
     return strlen(ptr);
}
void main(){
    char str[] = "vishwa";
    printf("the lenght is %d", mystr(str));
}