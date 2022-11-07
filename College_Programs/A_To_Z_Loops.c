#include<stdio.h>

int main()
{
    char small, big;

    for(small = 'a'; small <= 'z'; small++)
    {
        printf("%c \n", small);
    }

    for(big = 'A'; big <= 'Z'; big++)
    {
        printf("%c \n", big);
    }
    
    return 0;
}