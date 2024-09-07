#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if(a>=0){
        printf("positive\n");
        if(a%2==0){
            printf("even");
        }else{
            printf("odd");
        }
    }else{
        printf("negative");
    }
    return 0;
}