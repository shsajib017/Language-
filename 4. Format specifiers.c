/*
Write a program that prints  integer, float, double number and character. with format specifiers. 

*/
#include<stdio.h>
int main()
{
    int num1=10;
    int num2= 30;
    float num3= 13.1;
    double num4= 13.12345678912;
    char ch= "a";
    printf("Integer numbers are %d, %d\n", num1,num2);
    //We can determine how many decimals we get after the point . in float
    printf("Float number is %.1f\n", num3);
     
    printf("Double number is %lf\n", num4);
    printf("Character is %c", ch);
    getch();
}