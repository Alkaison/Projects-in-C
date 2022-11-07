#include<stdio.h>

int main(){
    
    int menAge, womenAge;
    
    printf("Enter age of Men: ");
    scanf("%d",&menAge);

    printf("Enter age of Women: ");
    scanf("%d",&womenAge);

    if(menAge < 0 || womenAge < 0)
    {
        printf("Please enter the age in positive number.");
    }
    else if(menAge < 21 && womenAge < 21)
    {
        printf("Both are not eligible for marriage.");
    }
    else if(menAge < 21)
    {
        printf("Men is not eligible for marriage.");
    }
    else if(womenAge < 21)
    {
        printf("Women is not eligible for marriage.");
    }
    else if(menAge >= 21 && womenAge >= 21)
    {
        printf("Congo, You both are eligible for marriage.");
    }

    return 0;
}