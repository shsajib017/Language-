#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int i=n;
    do{
        printf("%d\n",i);
        i--;
    }while(i>=0);
    return 0;
}