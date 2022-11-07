#include<stdio.h>

int main(){
	
	int number;
	
	printf("Please enter the number: ");
	scanf("%d",&number);
	
	if(number%2==0){
		printf("Number is Even! \n");
	} else {
		printf("Number is Odd! \n");
	}
	
	return 0;
}

