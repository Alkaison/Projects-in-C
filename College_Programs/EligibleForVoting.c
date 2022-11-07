#include<stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if (age>=18)
	{
		printf("You are eligible for Voting!");
	}
	else if (age>0)
	{
		printf("You are not eligible for Voting.");
	} 
	else 
	{
		printf("You are not born yet.");
	}
	
	return 0;
}
