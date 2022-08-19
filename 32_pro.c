#include<stdio.h>

void func(int *);

int main(){
    int marks[3] = {2,3,4};
    func(marks);
    for (int i = 0; i < 3; i++)
    {
    printf("The value of marks[%d] is %d\n", i, marks[i]);
    }
    return 0;
}
void func(int *ptr){
    *ptr = 56;
     ptr++;
     *ptr = 86;
     ptr++;
     *ptr = 96;
   //for (int i = 0; i < 3; i++)
  // {
      // printf("The value of marks[%d] is %d\n", i, *(ptr++));
  // }
   
}