// write a program to determine a student is pass or fail. 30<= fail, 30> pass
#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks (1-100): ");
    scanf("%d", &marks);
    if(marks>=0 && marks<=30){
        printf("failed");
    }else if(marks>30 && marks <= 100){
        printf("passed");
    }else{
        printf("wrong marks");
    }
    return 0;
}