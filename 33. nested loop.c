#include<stdio.h>

int main(){

    int rows;
    int columns;
    char symbol;

    printf("enter the number of rows: ");
    scanf("%d", &rows);

    printf("enter the number of columns: ");
    scanf("%d", &columns);
    
   getchar();    //used to clear the input buffer

    printf("enter a symbol to use: ");
    scanf("%c", &symbol);
    

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}