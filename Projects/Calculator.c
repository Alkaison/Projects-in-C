#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    char operator, retry;

    do
    {
        // clears the terminal screen
        system("cls");

        printf("Enter the operator (+ - * /) : ");
        scanf(" %c", &operator);

        // clears input buffers in console 
        fflush(stdin);

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        // switch case for getting result/output
        switch (operator)
        {
            case '+':
                printf("\nSum of %.0f & %.0f is: %.0f \n", num1, num2, (num1 + num2));
                break;
            case '-':
                printf("\nSubtraction of %.0f & %.0f is: %.0f \n", num1, num2, (num1 - num2));
                break;
            case '*':
                printf("\nProduct of %.0f & %.0f is: %.0f \n", num1, num2, (num1 * num2));
                break;
            case '/':
                printf("\nDivision of %.0f & %.0f is: %.0f \n", num1, num2, (num1 / num2));
                break;
            default:
                printf("\nERROR: Invalid Input. \n");
        }

        // clears input buffers in console 
        fflush(stdin);

        // checks if user wants to use calculator again
        printf("\nDo you waana try again [y/N]: ");
        scanf(" %c", &retry);
    } while (retry == 'y' || retry == 'Y');

    return 0;
}
