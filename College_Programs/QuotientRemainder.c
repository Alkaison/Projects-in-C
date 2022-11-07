#include<stdio.h>

int main(){
    
    int dividend, quotient, remainder, division;

    printf("Enter dividend: ");
    scanf("%d",&dividend);

    printf("Enter division: ");
    scanf("%d",&division);

    quotient = dividend / division;
    remainder = dividend % division;

    printf("Quotient: %d \n",quotient);
    printf("Remainder: %d \n",remainder);

    return 0;
}