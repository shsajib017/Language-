#include<stdio.h>

int main(){

    int x,y,temp;

    printf("enter x: ");
    scanf("%d", &x);

    printf("enter y: ");
    scanf("%d", &y);

    temp = x;
    x = y;
    y = temp;

    printf("x is: %d", x);
    printf("\ny is: %d", y);
}