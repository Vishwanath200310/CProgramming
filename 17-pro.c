#include<stdio.h>

void star(int);

int main(){
  star(5);
   return 0;
}

void star(int n){
    for (int i = 0; i < n; i++)
    {
        if( i == 3){
            break;
        }
        for (int j = 0; j < 2*i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}