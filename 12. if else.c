#include<stdio.h>
int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    if(age>18){
        printf("Adult\n");
        printf("they can vote\n");
    }
    else{
        printf("Not adult");
    }
    printf("thank you");
    getch();
}