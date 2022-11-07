#include<stdio.h>

int main(){
    
    int number;

    printf("Enter your age: ");
    scanf("%d",&number);

    (number % 2 == 0) ? printf("Its Even! \n") : printf("Its Odd! \n");

    return 0;
}