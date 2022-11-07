#include<stdio.h>

int main()
{
    int i=1, j=1;

label1: 
    if(i<=10)
    {
        printf("Hello World! \n");
        i++;
        goto label1;
    }

label2: 
    if(j<=10)
    {
        printf("%d. \n", j);
        j++;
        goto label2;
    }

    return 0;
}