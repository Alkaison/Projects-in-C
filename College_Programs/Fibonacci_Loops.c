//write a program to print fibonaicci series
#include<stdio.h>

int main(){
	
	int num1=1, num2=0, num3,number,i;
	
	printf("Enter the number: ");
	scanf("%d",&number);
	
	printf("Fibonacci Series: %d ", num2);
	
	for(i=1;i<number;i++)
	{
		num3 = num1 + num2;
		printf("%d ",num3);
		num1 = num2;
		num2 = num3;
	}	
	
	return 0;
}
