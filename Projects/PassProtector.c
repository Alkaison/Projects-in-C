#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

// Define Constant KeyWords 
#define ENTER 13
#define TAB 9
#define BKSP 8

//Function protoType
void password(void);

int main(){

    password();
    return 0;
}

void password(){
    
     system("cls");

    char pwd[255];
    char code[255] = {"Alkaison"};
    int i = 0;
	char ch;

	printf("Enter your password. Hit ENTER to confirm. \n");
	printf("Password:");

	while(1)
    {

		ch = getch(); // get key

		if(ch == ENTER || ch == TAB)
        {
			pwd[i] = '\0';
			break;
		}
        else if(ch == BKSP)
        {
			if(i > 0)
            {
				i--;
				printf("\b \b"); // for backspace
			}
		}
        else
        {
			pwd[i++] = ch;
			printf("* \b");	// to replace password character with * 
		}
	}

	// printf("\n\nPassword:%s\nLength:%d\n\n", pwd, i);  -- prints the user input & lenght of string 
    fflush(stdin);
    // verifies the password 
    if(strcmp(code, pwd) == 0)
    {
        printf("\nCorrect Password! \n");
        printf("\nPress any key to exit... \n");
        getch();
    }
    else
    {
        printf("\nInvaild Password! \n");
        printf("\nPress any key to exit... \n");
        getch();
    }
} 