// write a program to give grades to student.
// marks <30 is C, 30<=marks<70 is B, 70<=marks<90 is A, 90<=maRks<100 is A+
#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks (1-100): ");
    scanf("%d", &marks);
    if( marks>=0 && marks<30){
        printf("C");
    }else if(marks>=30 && marks<70){
        printf("B");
    }else if(marks>=70 && marks<90){
        printf("A");

    }else if(marks>=90 && marks<100){
        printf("A+");
    }else{
        printf("wrong number");
    }
    return 0;
}
