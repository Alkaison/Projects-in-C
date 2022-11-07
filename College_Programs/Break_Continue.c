#include<stdio.h>

int main()
{
    for(int i=1; i <= 50; i++)
    {
        if(i == 3)
            continue;

        if(i == 8)
            break;

        /* if(i==2 || i==5 || i==10)
            continue; */
        
        printf("%d. \n", i);
    }

    return 0;
}