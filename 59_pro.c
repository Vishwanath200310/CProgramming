#include<stdio.h>
#include<string.h>

#include<stdio.h>
#include<string.h>
 
typedef struct employee {
    int salary;
    float hike;
    char name[10];
}emp;
void show(emp *pnr){
          (*pnr).hike = 200;
}
int main(){
    int a = 45;
    emp e = {10, 100.1, "Vishwa"};
    show(&e);
    printf("%f\n", e.hike);
    return 0;
}