#include<stdio.h>

int main(){
    
    int number, total=0, rem=0;

    printf("Enter the number: ");
    scanf("%d",&number); // 56

    int tempNumber = number;

    while(number != 0)
    {
        rem = number % 10; // 56 % 10 = 6
        total += rem; // 0 + 6 = 6
        number = number / 10; // 56 / 10 = 5 
    }

    printf("Total: %d",total);

    return 0;
}