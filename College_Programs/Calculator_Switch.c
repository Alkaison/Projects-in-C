#include<stdio.h>

int main(){
	
    char ch;
    int num1, num2, result=0;

label1:

    printf("Enter the operator [+ - * /]: ");
    scanf(" %c", &ch);

    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    switch(ch)
    {
        case '+':
            result = num1 + num2;
            printf("Addition of %d & %d is: %d \n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Subtraction of %d & %d is: %d \n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Multiplication of %d & %d is: %d \n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("Division of %d & %d is: %d \n", num1, num2, result);
            break;
        default:
            printf("Invalid Operator! \n");
    }

    printf("Do you wanna try another operation [y/N]: ");
    scanf(" %c", &ch);

    if(ch == 'y' || ch == 'Y')
        goto label1;
    else
        printf("Program Ended! \n");

    return 0;
}