#include<stdio.h>

int main(){
    int arr[5][2] = {
                  {5 , 30},
                  {10 , 35},
                  {15 , 40},
                  {20 , 45},
                  {25 , 50}
    };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        { 
           printf("The multiplication of 5 x %d = %d ", i ,arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}