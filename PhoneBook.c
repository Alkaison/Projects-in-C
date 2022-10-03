#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

void password(void);
void menu(void);
void add(void);
void search(void);
void modify(void);
void list(void);
void delete(void);
void end(void);

int main(){

    //login to access the files and functions.
    password();

    return 0;
}

//Explained the password function in proper detailed.
void password()
{
    //clears the terminal screen
    system("cls");

    //this will store the password entered by user
    char code[12];
    
    //this is the correct password stored in database
    //password max length can be only 11 -- if you want more change the array size of code & pass both
    char pass[12] = {"Alkaison"};

    //this is used for loops & termination of user input
    int i;

    //this stores the length of password
    int z = strlen(pass);

    printf("Enter password: " );

    //loop to get user input for password
    for(i=0; i < z; i++)
    {
        code[i] = getch();
        printf("*");
    }

    //adding this symbol '\0' at the end of password entered by user for termination 
    code[i] = '\0';

    //comparing both passwords
    if(strcmp(code, pass) == 0)
    {
        printf("\n\nLogged in Successfully.");
        printf("\nPress any key to continue.");

        //holds the output screen
        getch();

        //opens the main menu for phonebook
        menu();
    }
    else
    {
        printf("\nInvalid Password.");
        //this will end the program here itself safely
        exit(0);
    }
}    

void menu()
{
    system("cls");

    char input;

    printf(">>> Phone Book Main Menu <<< \n");
    printf("> 1. Add \n");
    printf("> 2. Search \n");
    printf("> 3. Modify \n");
    printf("> 4. List \n");
    printf("> 5. Delete \n");
    printf("\n");
    printf("> 0. Close the Phone Book \n");

    printf("Please enter a number to proceed: ");
    scanf("%c",&input);
    
    //Symbols: ↪⇒0⇐⇶▢▷▶◀◁◯⨠⫸ 
}