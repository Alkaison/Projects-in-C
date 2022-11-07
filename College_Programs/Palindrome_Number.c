#include<stdio.h>

int main(){

    int number, revNumber=0, rem=0, tempNumber;

    printf("Enter the number: ");
    scanf("%d",&number);

    tempNumber = number;

    while(tempNumber != 0)
    {
        rem = tempNumber % 10;
        revNumber = revNumber * 10 + rem;
        tempNumber = tempNumber / 10;
    }

    printf("Reverse Number: %d \n",revNumber);

    if(number==revNumber)
    {
        printf("%d is a palindrome number. \n",number);
    }
    else 
    {
        printf("%d is not a palindrome number. \n",number);
    }
 
    return 0;
}