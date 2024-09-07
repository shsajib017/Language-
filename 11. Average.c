// Write a program to get the average of 3 numbers.
#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter 1st number:");
    scanf("%lf", &a);
    printf("Enter 2nd number:");
    scanf("%lf", &b);

    printf("Enter 3rd number:");
    scanf("%lf", &c);
    printf("The average is: %.2lf", (a+b+c)/3);
    return 0;
}