#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        if(i==3){
            break;    //exits a loop
           // continue;  //skips the 'if number' and continue till the end
        }
        printf("%d\n",i);
    }
    printf("end");
    return 0;
}