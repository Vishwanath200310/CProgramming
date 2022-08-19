#include<stdio.h>

int main(){
   int a ;
    printf("enter your income amount\n");
    scanf("%d", &a);
    if(a>=250000 && a<=500000){
      printf("your incomr tax rate is 5 percentade");
    }
    else if(a<=1000000 && a>=500000){
      printf("your income tax rate is 10 percentage");
    }
    else{
      printf("your income tax rate is 20 percentage");
    }
return 0;
   
}