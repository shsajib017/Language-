#include<stdio.h>
#include<math.h>
int main(){
    
    int num1, num2;
    float num3, num4;

    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);
    
    printf("Enter two floats: ");
    scanf("%f%f", &num3, &num4);

    int sum1;

    sum1= num1 + num2;

    float sum2, diff;

    sum2= num3 + num4;

    diff= num3 - num4;

    printf("\nThe sum of two integers: %d", sum1);
    
    printf("\nThe sum of two floats: %0.1f", round(sum2));

    printf("\nThe difference of two floats: %0.1f", round(diff));
    
    return 0;
}