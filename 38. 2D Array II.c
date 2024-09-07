#include<stdio.h>

int main(){

    int row,col,i,j,A[100][100];

    printf("Enter number of rows: ");
    scanf("%d", &row);

     printf("Enter number of columns: ");
    scanf("%d", &col);

    for(i = 0; i < row; i++){

        for(j = 0; j < col; j++){

           scanf("%d", &A[i][j]);
            
        }

    }
    for(i = 0; i < row; i++){

        for(j = 0; j < col; j++){

            printf("%d ", A[i] [j]);

        }
        printf("\n");
    }
    return 0;
}