#include<stdio.h>

int main()
{
// 3. Write a program to take input from the user until he/she enters zero.
    int num;
label1:
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The number: %d \n\n", num);

    if(num != 0)
        goto label1;

// 4. Write a program to take input from the user until he/she enters a negative number.

/* 
label2:
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The number: %d \n\n", num);

    if(num > 0)
        goto label2;
*/

    return 0;
}