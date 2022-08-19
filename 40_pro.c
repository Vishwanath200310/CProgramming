#include<stdio.h>

int main(){
        int arr[4][10] ;
        int mul[4];
        printf("Enter the tables u want to know\n");
      for (int i = 0; i < 4; i++)
      {
         scanf("%d",&mul[i]);
      }
      
        for (int i = 0; i < 4; i++)
        {
         for (int j = 0; j < 10; j++)
         {
             arr[i][j] = (j+1) * mul[i];
         }
        }
            
        for (int i = 0; i < 4; i++)
        {
           for (int j = 0; j < 10; j++)
           {
               printf("%d ", arr[i][j]);
           }
           printf("\n");
        }
    return 0;
}