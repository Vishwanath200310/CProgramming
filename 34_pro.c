#include<stdio.h>

void func(int* ptr);

int main(){
    int arr[2][5] = {
                   {11,12,13,14,15},
                   {43,55,66,77,68}
    };
    func(arr);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           printf("%d ", arr[i][j]);
        }
       printf("\n");
    }
    return 0;
}

void func(int* ptr){
    *ptr = 56;
}