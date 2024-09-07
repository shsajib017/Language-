#include<stdio.h>
#include<string.h>

int main(){

    char x[15] = "water";
    char y[15] = "honey";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x is: %s", x);
    printf("\ny is: %s", y);
}