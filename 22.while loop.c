#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;// i++ == i=i+1
    }
    /*for(int i; i<=n; i++){
        printf("%d\n",i);
    }*/
    return 0;
}