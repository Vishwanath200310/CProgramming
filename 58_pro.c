#include<stdio.h>
#include<string.h>
struct employee
{
    int salary;
    float hike;
    char name[10];
};

int main(){
    struct employee facebook;
    struct employee *ptr = &facebook;
    strcpy(facebook.name,"Vishwa");
    facebook.hike = 100;
    facebook.salary =10000;
    printf("The name of the employee is %s\n", facebook.name);
    printf("The address is %u\n", ptr->name);
    printf("The address is %u\n", ptr->hike);
    printf("The address is %u\n", ptr->salary);
    return 0;
}