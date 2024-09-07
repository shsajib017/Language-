// keep entering a number until the user enters multiple of 7
#include<stdio.h>
int main(){
    int n;
    do{
    printf("enter a number: ");
    scanf("%d", &n);

    if(n%7==0){
        break;
    }
    }while (1);
    
        printf("thank you");
    
    return 0;
    
}