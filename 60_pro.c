#include<stdio.h>

typedef struct twodim{
    int x;
    int y;
}twodim;
int main(){
    twodim v1 ={1, 4};
    twodim v2 ={45, 53};
    printf("%di + %dj\n", v1.x, v1.y);
    printf("%di + %dj", v2.x, v2.y);
    return 0;
}