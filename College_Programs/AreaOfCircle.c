#include<stdio.h>

int main(){
	
	int radius;
	float pi=3.14, perimeter, area;
	
	printf("Please enter radius: ");
	scanf("%d",&radius);
	
	area = pi * radius * radius;
	perimeter = 2 * pi * radius;
	
	printf("Area of circle: %f\n",area);
	printf("Perimeter of circle: %f",perimeter);
	
	return 0;
}
