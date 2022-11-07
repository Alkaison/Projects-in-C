//write a program to print the factorial
#include<stdio.h>

int main(){
	
	int number,i;
	double result=1;

	printf("Enter the number: ");
	scanf("%d",&number);
	
	for(i=number;i>=1;i--)
	{
		result = result * i;
	}

	printf("Factorial of %d is: %0.0lf \n",number,result);
	return 0;
}
