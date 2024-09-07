// keep entering a number until the number is an odd number
#include<stdio.h>
int main(){
    int n;
    do{
    printf("enter a number: ");
    scanf("%d", &n);

    if(n%2!=0){
        break;
    }
    }while (1);
    
        printf("thank you");
    
    return 0;
    
}