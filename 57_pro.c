#include<stdio.h>
#include<string.h>

typedef struct employee{
    int salary;
    float hike;
    char name[10];
}emp;

void show( emp* ptr){
      (*ptr).name[0] = 'I';
      (*ptr).hike = 3.1;
}
int main(){
    emp vishwa = {1, 2.1,"vishwa"};
    show(&vishwa);
    printf("%s\n",vishwa.name);
    printf("%f",vishwa.hike);
    return 0;
}
