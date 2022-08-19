#include<stdio.h>

 int main()
{
    char str[] = "Vishwa";
    for (int i = 0; i < 7; i++)
    {
       if (str[i] == 'p')
       {
         printf("The string contains the letter %c \n", str[i]);
         break;
       }
       else
       {
         printf("The string does not contain this particular letter");
         break;
       }
       
    }
    
    
    return 0;
}
