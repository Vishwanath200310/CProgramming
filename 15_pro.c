//(0°C × 9/5) + 32 = 32°F
#include<stdio.h>
double ctof(float a);
int main(){
    printf("the value of 0 c to f is %f", ctof(0));
    return 0;
}
double ctof(float a){
    return ( (a * 9/5) + 32);
}