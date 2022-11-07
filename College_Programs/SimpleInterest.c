#include<stdio.h>

int main(){
	
	float SI, principle, rate, time, total;
	
	printf("Enter principle amount: ");
	scanf("%f",&principle);
	
	printf("Enter rate of interest: ");
	scanf("%f",&rate);
	
	printf("Enter time period (years): ");
	scanf("%f",&time);
	
	SI = (principle * rate * time) / 100;
	total = SI + principle;
	
	printf("Simple Interest: %.2f \n",SI);
	printf("Total Amount: %.2f",total);
	
	return 0;
}