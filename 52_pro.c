#include<stdio.h>
#include<string.h>
char slice(char* s1, char* s2){   
    char t[100];
             strcpy(t, s1);
  strcpy(s1, s2);
  strcpy(s2, t);
  printf("The sliced letter is %s\n", s1);
     printf("The sliced letter is %s", s2);
     
}

 int main()
{
    char s1[100] = "hello";  
    char s2[100] = "bye"; 
    slice(s1,s2);
    
    return 0;
}
