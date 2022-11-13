#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

// Define KeyWords
#define ENTER 13
#define TAB 9
#define BKSP 8

// Function ProtoType
void password(void);
void menu(void);
void add(void);
void search(void);
void modify(void);
void list(void);
void delete(void);
void end(void);

void main(){
    password();
}

//Explained the password function in proper detailed.
void password()
{
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

    // verifies the password 
    if(strcmp(code, pwd) == 0)
    {
        printf("\nCorrect Password!");
        Sleep(2000);
        menu();
    }
    else
    {
        printf("\nInvaild Password!");
        Sleep(2000);
        password();
    }
}    

void menu()
{
    //clears the terminal screen
    system("cls");

label1:

    //clears the input stream - prevents the program from going into infinite loop
    fflush(stdin);

    printf(">>> Phone Book Main Menu <<< \n");
    printf("> 1. Add Record\n");
    printf("> 2. Search Record\n");
    printf("> 3. Modify Record\n");
    printf("> 4. List Record\n");
    printf("> 5. Delete Record\n");
    printf("> 6. Close the Phone Book \n\n");

    int input;
    printf("Please enter a number to proceed: ");
    scanf("%d",&input);

    switch (input)
    {
    case 1:
        add();
        break;
    case 2:
        search();
        break;

    case 3:
        modify();
        break;

    case 4:
        list();
        break;

    case 5:
        delete();
        break;

    case 6:
        end();
        break;

    default:
        printf("\nXXX - Invaild input - XXX\n\n");
        goto label1;
        break;
    }
}

void add()
{

label1:

    //clears the input stream - prevents the program from going into infinite loop
    fflush(stdin);
    system("cls");

    //opening file -- ab+ -- it will create the file if its not there, also used for writing.
    FILE *pF = fopen("record.txt", "ab+");

    char name[255];
    char address[255];
    char mail[255];
    double number;

    if(pF != NULL)
    {
        printf("Enter Name: ");
        gets(name);

        printf("Enter Address (City): ");
        gets(address);

        printf("Enter Mail-ID: ");
        gets(mail);

        printf("Enter Phone No.: ");
        scanf("%lf",&number);

        fprintf(pF, "%s %s %s %.0lf \n", name, address, mail, number);
    }   
    else
        printf("Unable to open/locate the file.");

    //closes the file
    fclose(pF);
    fflush(stdin);

    //retry screen
    char input;
    printf("Do you wanna enter more records [y/N]: ");
    scanf(" %c",&input);

    if(input == 'y' || input=='Y')
        goto label1;
    else if(input=='n' || input=='N')
    {
        printf("\nRedirecting to main menu.");
        Sleep(2000);
        menu();
    }
    else
    {
        printf("\nInvaild input. Redirecting to main menu.");
        Sleep(2000);
        menu();
    }
}

void search()
{

label2:

    system("cls");
    fflush(stdin);

    FILE *pF = fopen("record.txt", "r");

    char name[255];
    char address[255];
    char mail[255];
    double number;
    
    int flag=0;
    int compare;

    char find[255];
    printf("Enter the name of the person you want to see the detail: ");
    gets(find);

    while(fscanf(pF, "%s %s %s %lf \n", name, address, mail, &number) != EOF)
    {
        //strcmp(variable, variable1) -- if both the strings are equal then it will return 0 otherwise a random number.
        compare = strcmp(find, name);

        if(compare == 0)
        {
            printf("\n>>> Record Found <<< \n\n");
            
            printf("> Name: %s \n", name);
            printf("> Address: %s \n", address);
            printf("> Mail ID: %s \n", mail);
            printf("> Phone No.: %.0lf \n", number);

            flag = 1;
        }
    }

    fclose(pF);

    if(flag == 0)
        printf("\n>>> Record Not Found <<< \n");

    fflush(stdin);

    char input;
    printf("\nDo you wanna search for more records [y/N]: ");
    scanf(" %c",&input);

    if(input == 'y' || input=='Y')
        goto label2;
    else if(input=='n' || input=='N')
    {
        printf("\nRedirecting to main menu.");
        Sleep(2000);
        menu();
    }
    else
    {
        printf("\nInvaild input. Redirecting to main menu.");
        Sleep(2000);
        menu();
    }
}

void modify()
{
    system("cls");
    fflush(stdin);

    //opening main record file & a temporary file s
    FILE *pF = fopen("record.txt", "r");
    FILE *pTemp = fopen("temporary.txt", "a");

    char name[255], address[255], mail[255];
    char name1[255], address1[255], mail1[255];
    double number, number1;

    int compare, flag=0;

    printf("Enter the name of the person you want to see the detail: ");
    gets(name1);

    fflush(stdin);
    system("cls");

    while(fscanf(pF, "%s %s %s %lf \n", name, address, mail, &number) != EOF)
    {
        compare = strcmp(name1, name);
        if(compare == 0)
        {
            printf("-------------------------------\n");
            printf(">>> Record Modification <<< \n");
            printf("-------------------------------\n\n");

            printf("Enter Name: ");
            gets(name1);

            printf("Enter Address (City): ");
            gets(address1);

            printf("Enter Mail-ID: ");
            gets(mail1);

            printf("Enter Phone No.: ");
            scanf("%lf",&number1);

            fprintf(pTemp, "%s %s %s %.0lf \n", name1, address1, mail1, number1);

            flag = 1;
        }
        else
            fprintf(pTemp, "%s %s %s %.0lf \n", name, address, mail, number);
    }

        if(flag == 0)
        {
            printf("-------------------------------\n");
            printf(">>> Record Not Found <<< \n");
            printf("-------------------------------\n\n");
        }
    
    fclose(pF);
    fclose(pTemp);

    //deletes everything from main record file
    pF = fopen("record.txt", "w");
    fclose(pF);

    pF = fopen("record.txt", "a");
    pTemp = fopen("temporary.txt", "r");

    //copies records from temporary file to main record file
    while (fscanf(pTemp, "%s %s %s %lf \n", name, address, mail, &number) != EOF)
    {
        fprintf(pF, "%s %s %s %.0lf \n", name, address, mail, number);
    }

    fclose(pF);
    fclose(pTemp);

    //deletes everything from temporary file
    pTemp = fopen("temporary.txt", "w");
    fclose(pTemp);

    printf("\n\nProcessing your changes....");
    Sleep(3000);
    menu();

}

void list()
{
    system("cls");
    FILE *pF = fopen("record.txt", "r");

    char name[255];
    char address[255];
    char mail[255];
    double number;

    //lists all the records from main record files
    while(fscanf(pF, "%s %s %s %lf \n", name, address, mail, &number) != EOF)
    {
        printf("-------------------------------\n");
        printf("> Name: %s \n", name);
        printf("> Address: %s \n", address);
        printf("> Mail-ID: %s \n", mail);
        printf("> Phone No.: %.0lf \n", number);
        printf("-------------------------------\n\n\n");
    }

    fclose(pF);

    printf("Press any key to get back to main menu.\n");
    getch();
    menu();
}

void delete()
{
    system("cls");

    FILE *pF = fopen("record.txt", "r");
    FILE *pTemp = fopen("temporary.txt", "a");

    char name[255], name1[255], address[255], mail[255];
    double number;
    
    int compare, flag=0;

    fflush(stdin);
    system("cls");
    
    printf("Enter the name of the person you want to see the detail: ");
    gets(name1);

    fflush(stdin);
    system("cls");

    while(fscanf(pF, "%s %s %s %lf \n", name, address, mail, &number) != EOF)
    {
        compare = strcmp(name1, name);
        if(compare == 0)
        {
            //this time the record won't be copied to temporary file and this record will be skipped.
            printf("-------------------------------\n");
            printf(">>> Record Deleted Successfully <<< \n");
            printf("-------------------------------\n\n");
            flag = 1;
        }
        else
        {
            //it will copy the records from main file to temporary file one by one.
            fprintf(pTemp, "%s %s %s %.0lf \n", name, address, mail, number);
        }
    }

    if(flag == 0)
        {
            printf("-------------------------------\n");
            printf(">>> Record Not Found <<< \n");
            printf("-------------------------------\n\n");
        }

    fclose(pF);
    fclose(pTemp);

    //deletes everything from main record file
    pF = fopen("record.txt", "w");
    fclose(pF);

    pF = fopen("record.txt", "a");
    pTemp = fopen("temporary.txt", "r");

    while (fscanf(pTemp, "%s %s %s %lf \n", name, address, mail, &number) != EOF)
    {
        fprintf(pF, "%s %s %s %.0lf \n", name, address, mail, number);
    }

    fclose(pF);
    fclose(pTemp);

    //deletes everything from temporary file
    pTemp = fopen("temporary.txt", "w");
    fclose(pTemp);

    printf("\n\nProcessing your changes....");
    Sleep(3000);
    menu();

}

void end()
{
    system("cls");

    printf(">>> Phone Book in C <<< \n\n");
    printf("> Creator: @Alkaison (Ganesh Mourya) \n\n");
    printf("> Github: https://github.com/Alkaison \n");
    printf("> Twitter: https://twitter.com/Alkaison \n");
    printf("> LinkedIn: https://www.linkedin.com/in/Alkaison \n\n");
    printf("Press any key to exit. \n");

    getch();
    exit(0);

}