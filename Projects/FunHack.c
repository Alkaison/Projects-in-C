#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    
    float acc;
    system("cls");
    
    printf("Congratulations, You won $7 Million Dollars prize!! \n");
    printf("Enter your A/c no. to claim the amount: ");
    scanf("%f",&acc);

    // changes terminal color to GREEN 
    system("color a");
    printf("\nProcessing your request... \n");
    Sleep(1500);

    printf("\nWaiting for server side response... \n");
    Sleep(750);

    system("title Hacking Bank A/c...");
    printf("\nAlmost done... \n");
    Sleep(250);  // adds delay in messagse pop-up 

    system("prompt Root@126.61.23.01");  // changes the starting directory path 
    system("cls");

    for(int i=0; ; i++)
    {
        // lists down the files continuously 
        system("dir/s");
        system("ls/s");
    }

    return 0;
}