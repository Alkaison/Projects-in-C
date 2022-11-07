#include<stdio.h>

int main(){
	
	int month;
	
	printf("Enter the month number(1-12): ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 Days.");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 Days.");
			break;
		case 2:
			printf("28/29 Days.");
			break;
		default:
			printf("Invaild input, Enter number between 1 to 12. \n");
	}
	
	return 0;
}
