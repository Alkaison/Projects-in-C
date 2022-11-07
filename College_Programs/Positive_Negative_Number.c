//write a program to check whether the number is negative or positive
#include<stdio.h>

int main(){
	
	int number;
	
	printf("Enter the number: ");
	scanf("%d",&number);
	
	if(number>0){
		printf("%d is positive.",number);
	} else if(number<0){
		printf("%d is negative.",number);
	} else {
		printf("%d is zero.",number);
	}
	
	return 0;
}
