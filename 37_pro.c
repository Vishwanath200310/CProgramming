#include<stdio.h>
void reverse(int * a, int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        //swap i with n-i-1
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    
}

void display(int *ptr, int n){
      for (int i = 0; i < n; i++)
      {
        printf("%d ", *ptr);
        ptr++;
      }
      printf("\n");

}
int main(){
   int arr[5] = {1, 2, 3, 4, 5};
   display(arr, 5);
   reverse(arr, 5);
   display(arr, 5);
    return 0;
}



