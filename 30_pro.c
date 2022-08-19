#include<stdio.h>

int main(){
    int marks[3] = {2,3,4};
     int* ptr = marks;
     *ptr = 89;
     ptr++;
     *ptr = 65;
    printf("the marks of is %d",marks[1]);
    return 0;
}