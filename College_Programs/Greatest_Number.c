//write a program to find the greatest number among three numbers.
#include<stdio.h>

int main(){
	
	int num1, num2, num3;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	printf("Enter third number: ");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
		printf("First number %d is greatest.",num1);
	else if(num2>num1 && num2>num3)
		printf("Second number %d is greatest.",num2);
	else if(num3>num1 && num3>num2)
		printf("Third number %d is greatest.",num3);
	else
		printf("All three numbers are equal.");
		
	return 0;	
}
