//write a program to check whether the year is leap year or not
#include<stdio.h>

int main(){
	
	int year;

	printf("Enter the year:");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("%d is leap year. \n",year);
	}
	else
	{
		printf("%d is not a leap year. \n",year);
	}
	
	return 0;
}
