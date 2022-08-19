#include<stdio.h>
int main(){
    int marks[5];
    for (int i = 1; i < 5; i++)
    {
      printf("enter the marks of student %d\n", i );
      scanf("%d", &marks[i]);
    }
    for (int i = 1; i < 5; i++)
    {
        printf(" the marks scored by student %d is %d\n", i, marks[i]);
    }
    return 0;
}