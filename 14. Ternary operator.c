#include<stdio.h>
int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    age >= 18? printf("Adult") : printf("Not adult");
    return 0;
}