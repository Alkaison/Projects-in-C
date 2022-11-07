#include<stdio.h>

int main(){
	
	char c;
	
	printf("Enter a character: ");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'm':
		case 'M':
			printf("Male.");
			break;
		case 'f':
		case 'F':
			printf("Female.");
			break;
		default:
			printf("Invaild input received.");
	}
	
	return 0;
}
