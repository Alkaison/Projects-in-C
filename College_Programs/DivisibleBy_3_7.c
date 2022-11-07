#include<stdio.h>

int main(){
	
    int num; 

    printf("Enter the number: ");
    scanf("%d", &num);

    if((num % 3 == 0) && (num % 7 == 0))
    {
        printf("The number %d is divisible by 3 & 7 both. \n", num);
    }
    else if(num % 3 == 0)
    {
        printf("The number %d is divisible by 3. \n", num);
    }
    else if(num % 7 == 0)
    {
        printf("The number %d is divisible by 7. \n", num);
    }
    else
    {
        printf("The number is not divisible by 3 & 7 both. \n");
    }

	return 0;
}