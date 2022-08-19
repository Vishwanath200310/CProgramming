#include<stdio.h>

#include<time.h>

#include<stdlib.h>

int game(char you, char comp){
    if (you == comp )
    {
       return 0;
    }
    else if ((you == 's' && comp == 'sc') || (you == 'p' && comp == 's') || (you == 'sc' && comp == 'p') )
    {
        return 1;
    }
    else{
        return -1;
    }
    

}
int main(){
    char  you, comp;
    srand(time(0));
    int numb;
    numb = rand()%100 + 1;
    
    if(numb < 33){
        comp = 's';
    }
    else if (numb < 66){
        comp = 'p';
    }
    else{
        comp = 'sc';
    }

   printf("Enter s for stone, p for paper, sc for scissor\n");
    scanf("%c", &you);

  int result = game(you, comp);
  if (result == 0)
  {
    printf("Match drawn\n");
  }
  else if (result == 1)
  {
    printf("you won\n");
  }
  else
  {
    printf("You lost\n");
  }
    printf("You choose %c and comp choose %c" , you , comp);
    return 0;
}