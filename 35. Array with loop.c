#include<stdio.h>

int main(){

   
     float prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0};

     //printf("%d bytes\n", sizeof(prices));

      for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%.2f\n", prices[i]);
     }

     return 0;
}