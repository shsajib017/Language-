#include<stdio.h>

void birthday(char name[], int age){
    printf("\nHappy birhtday dear %s!", name);
    printf("\nYou are %d years old!", age);
    
}

int main(){
    char name[]="Sajib";
    int age=21;

    birthday(name, age);
    return 0;

}