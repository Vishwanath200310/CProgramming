#include<stdio.h>

int main(){
    int arr[3][4];
    int mul[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 4; j++)
       {
            arr[i][j] = 2 * mul[j];
            printf("%u " , &arr[i][j]);
       }
       printf("\n");
   /* for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 5; k++)
            {
               printf("%d ", arr[i][j][k]);
            }
           printf("\n");
        }
        
    }*/
    
    }
    return 0;
}