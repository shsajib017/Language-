// if a number is greater than 9 and less than 100 -> True
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("%d", (a>9)&&(a<100));
    return 0;
}