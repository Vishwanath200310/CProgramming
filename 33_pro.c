#include<stdio.h>

void display(int mark[2][3]);

int main(){
    int marks[2][3];
    printf("Enter value for array[2][3]");
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
    scanf("%d",&marks[i][j]);
       }
    }
    display(marks);
    
    return 0;
}

void display(int mark[2][3]){
for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
           printf("%d ", mark[i][j]);
       }
           printf("\n");
    }
}
