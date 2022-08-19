#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int numbers , guess , nguesses;
    srand(time(0));
    numbers = rand() % 100 +1;
     do
     {
        printf("guess the number\n");
        scanf("%d", &guess);

        if(numbers == guess){
        printf("yayy! \n");
        }

        else if(numbers > guess){
            printf("lower\n");
        }

        else{
            printf("higher\n");
        }
        
     } while (numbers != guess);
     
   
    return 0;
}