#include<stdio.h>
#include<stdlib.h>

//Function Prototypes
void printSum(float, float);
void printDiff(float, float);
void printProd(float, float);
void printDiv(float, float);
void printModu(int, int);

int main(){

    float num1, num2;
    char operator, retry;

//if user says he want to try again, the program will restart from here...
label1:

    //clears the terminal screen
    system("cls"); 

    printf("Enter the operator (+ - * / %) : ");
    scanf("\n%c", &operator);

    //check the input for operators
    if(operator=='+' || operator=='-' || operator=='*' || operator=='/' || operator=='%')
    {
        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        //switch case for getting result/output
        switch(operator) 
        {
            case '+':
                printSum(num1, num2);
                break;
            case '-':
                printDiff(num1, num2);
                break;
            case '*':
                printProd(num1, num2);
                break;
            case '/':
                printDiv(num1, num2);
                break;
            case '%':
                printModu(num1, num2);
                break;
            default:
                printf("ERROR: Invalid Input.");
        }
    } 
    else 
    {
        printf("ERROR: Invalid Input.");
        //this will end the program here itself if the operator input is invaild
        exit(0);
    }
    
    //checks if user wants to use calculator again 
    printf("\nDo you waana try again [y/N]: ");
    scanf("\n%c", &retry);

    if(retry=='y' || retry=='Y')
    {
        goto label1;
    } 
    else if(retry=='n' || retry=='N')
    {
        printf("Program Ended.");
    }
    else
    {
        printf("ERROR: Invalid Input.");
    }
    
    return 0;
}

//Function Bodies
void printSum(float num1, float num2) {
    printf("Sum of %.0f & %.0f is: %.0f", num1, num2, (num1+num2));
}

void printDiff(float num1, float num2){
    printf("Subtraction of %.0f & %.0f is: %.0f", num1, num2, (num1-num2));
}

void printProd(float num1, float num2){
    printf("Product of %.0f & %.0f is: %.0f", num1, num2, (num1*num2));
}

void printDiv(float num1, float num2){
    printf("Division of %.0f & %.0f is: %.0f", num1, num2, (num1/num2));
}

void printModu(int num1, int num2){
    int modu = num1 % num2;
    printf("Modules of %d & %d is: %d", num1, num2, modu); 
}