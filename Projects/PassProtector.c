//default pre-defined library
#include<stdio.h>

//for using getch() function
#include<conio.h>

//for using strcmp() function
#include<string.h>

//for using exit(0) function
#include<stdlib.h>

//Function protoType
void password(void);

int main(){

    password();
    return 0;
}

void password(){
    
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
        printf("\nLogged in Successfully.");
    }
    else
    {
        printf("\nInvalid Password.");
        //this will end the program here itself safely
        exit(0);
    }
} 