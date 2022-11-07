#include<stdio.h>

int main(){

    int number, tempNumber, sum=0, rem=0;

    printf("Enter the number: ");
    scanf("%d",&number);

    tempNumber = number;

    while(number > 0)
    {
        rem = number % 10;
        sum = sum + (rem * rem * rem);
        number = number / 10;
    }

    if(tempNumber == sum)
    {
        printf("%d is an armstrong number.",tempNumber);
    }
    else
    {
        printf("%d is not an armstrong number.",tempNumber);
    }

    return 0;
}