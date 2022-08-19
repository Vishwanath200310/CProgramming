#include<stdio.h>

int func(char*);

int main(){
    char a = 'you';
    func(&a);
    printf("%d", a);
    return 0;
}

int func(char* b){
      return *b = 10;
}