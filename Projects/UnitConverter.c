#include<stdio.h>
#include<stdlib.h>

//Function ProtoTypes
void temperature();
void currency();
void mass();

int main(){

    char retry, category;

    do
    {
        // clears the terminal screen
        system("cls");

        printf("Welcome to Unit Converter!\n");
        printf("Here is a list of converters to choose from: \n");
        printf("Enter 'T' for Temperature convertion.\n");
        printf("Enter 'M' for Mass convertion.\n");
        printf("Entre 'C' for Currency convertion.\n\n");
        printf("Enter input: ");
        scanf(" %c", &category);

        fflush(stdin);

        switch (category)
        {
            case 'T':
            case 't':
                temperature();
            case 'M':
            case 'm':
                mass();
            case 'C':
            case 'c':
                currency();
            default:
                printf("\nError: Invalid Input. \n");
        }

        printf("\nDo you wanna try again [y/N]: ");
        scanf(" %c", &retry);
        fflush(stdin);

    } while (retry == 'y' || retry == 'Y');

    return 0;
}

void temperature()
{   
    //clears the terminal screen
    system("cls");

    int input;
    float  celsius, fahrenheit;
    
    printf("Welcome to Temperature Converter!\n");
    printf("Here is a list of conversion to choose from: \n");
    printf("Enter 1 for Celsius to Fahrenheit. \n");
    printf("Enter 2 for Fahrenheit to Celisus. \n");
    printf("Enter input: ");
    scanf("%d", &input);

    //clears the terminal screen
    system("cls");

    if(input==1)
    {
        printf("Enter Celisus: ");
        scanf("%f",&celsius);

        fahrenheit = (celsius * 1.8000) + 32.00;

        printf("Fahrenheit: %.2f \n", fahrenheit);
    } 
    else if (input==2)
    {
        printf("Enter Fahrenheit: ");
        scanf("%f",&fahrenheit);

        celsius = (fahrenheit - 32)*5/9;

        printf("Celsius: %.5f \n",celsius);
    } 
    else 
        printf("ERROR: Invaild Input.");
}

void mass()
{
    //clears the terminal screen
    system("cls");

    int input;
    printf("Welcome to Mass Converter!\n");
    printf("Here is a list of conversion to choose from: \n");
    printf("Enter 1 for ounces to pounds. \n");
    printf("Enter 2 for gram to pounds. \n");
    printf("Enter input: ");
    scanf("%d",&input);

    //clears the terminal screen
    system("cls");

    if(input==1)
    {
        int userinputOunce;
        float ounceToPounds;

        printf("Please enter the ounce amount: ");
        scanf("%d",&userinputOunce);
        ounceToPounds = userinputOunce * 0.0625;
        printf("Pounds: %.2f \n",ounceToPounds);
    }
    else if (input==2)
    {
        int userinputGram;
        float gramsToPounds;

        printf("Please enter the gram amount: ");
        scanf("%d",&userinputGram);
        gramsToPounds = userinputGram * 0.00220462;
        printf("Pounds: %.2f \n",gramsToPounds);
    }
    else 
        printf("ERROR: Invaild Input.");
}

void currency()
{
    //clears the terminal screen
    system("cls");

    int input;
    float usd, inr, eur, rmb, jpy;
    printf("Welcome to Currency Converter! \n");
    printf("Here is a list of conversion to choose from: \n");
    printf("Enter 1 for USD to Euro. \n");
    printf("Enter 2 for USD to JPY. \n");
    printf("Enter 3 for USD to RMB. \n");
    printf("Enter 4 for USD to INR. \n");
    printf("Enter input: ");
    scanf("%d",&input);

    //clears the terminal screen
    system("cls");

    if (input==1)
    {
        printf("Enter the USD amount: ");
        scanf("%f",&usd);

        eur = usd * 1.04;

        printf("Euro: %.2f \n ",eur);
    }
    else if (input==2)
    {
        printf("Enter the USD amount: ");
        scanf("%f",&usd);

        jpy = usd * 144.84;

        printf("Japanese Yen: %.2f \n ",jpy);
    }
    else if (input==3)
    {
        printf("Enter the USD amount: ");
        scanf("%f",&usd);

        rmb = usd * 7.18;

        printf("Chinese Yuan: %.2f \n ",rmb);
    }
    else if (input==4)
    {
        printf("Enter the USD amount: ");
        scanf("%f",&usd);

        inr = usd * 81.63;

        printf("Indian Rupee: %.2f \n ",inr);
    }
    else
        printf("ERROR: Invaild Input.");
}
