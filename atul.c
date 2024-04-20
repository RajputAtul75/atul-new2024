#include<stdio.h>

int main(){
    int length,breadth,side,a1,a2;
    printf("enter the length:");
    scanf("%d", &length);
    printf("enter the breadth:");
    scanf("%d", &breadth);
    printf("enter the side:");
    scanf("%d", &side);
    a1 = length * breadth;
    a2 = side * side;
    printf("area of rectangle is = %d\n",a1);
    printf("area of square is = %d\n", a2);
    return 0;
}

    
