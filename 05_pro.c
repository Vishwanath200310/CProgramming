#include<stdio.h>

int main(){
   int leapyear;
   printf("enter the year\n");
   scanf("%d", &leapyear);
   if(leapyear%4==0){
      printf("the year you enterted is leap year\n");
   }
   else{
      printf("the year you entered is common year\n");
   }
return 0;
   
}