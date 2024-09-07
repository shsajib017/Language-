// Write a program to find if a character entered by the user is upper case or not.
#include<stdio.h>
int main(){
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("lower case");
    }else if (ch >= 'A' && ch <= 'Z'){
        printf("upper case");
    }else{
        printf("not english letter");
    }
    return 0;
}