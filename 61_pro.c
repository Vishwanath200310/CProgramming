#include<stdio.h>

 struct vector{
    int x;
    int y;
};

struct vector sum(struct vector v1, struct vector v2){
    int a, b;
    a = v1.x + v2.x;
    b = v1.y + v2.y;
    struct vector result = {a , b};
    return result;
}

int main(){
   struct vector v1 ={5, 6};
   struct vector v2 ={7, 8};
   struct vector v3 = sum(v1, v2);
   printf("%di + %dj ", v3.x, v3.y);
    return 0;
}