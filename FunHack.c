#include<stdio.h>
#include<windows.h> 

int main(){
    
    int acc;
    
    //clears the terminal screen for better visibility
    system("cls");
    
    printf("Congratulations, You won 7 cr. prize! \n");
    printf("Enter your A/c no.: ");
    scanf("%d",&acc);

    printf("\nProcessing your request... \n");
    //adds delay of 4s before moving to next line
    Sleep(4000);

    printf("\nWaiting for server side response... \n");
    Sleep(3000);

    printf("\nAlmost done... \n");
    Sleep(2000);

    //this changes the terminal color to GREEN
    system("color a");
    
    //this changes the command prompt header text
    system("title Hacking Bank A/c...");
    
    //clears the terminal screen for better visibility
    system("cls");

    //infinity loop
    for(int i=0; ; i++)
    {
        //lists the current directory files
        system("dir/s");
    }

    return 0;
}
