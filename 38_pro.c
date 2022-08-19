#include<stdio.h>
int func(int arr[3]);
    
int main(){
    int arr[3] = {-1, 3, 5};
    
    printf("\n");
    printf("%d", func(arr));
    return 0;
}

int func(int arr[3]){
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
       if(arr[i] > 0) {
             //printf("%d ", arr[i]);
             count++;
       }
      
    }
    return count;
}


