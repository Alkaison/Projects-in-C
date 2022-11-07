//write a program to calculate area of rectangle.
#include<stdio.h>

int main(){
	
	int width, height, area;
	
	printf("Enter width:");
	scanf("%d",&width);
	
	printf("Enter height:");
	scanf("%d",&height);
	
	area = width * height;
	printf("Area of Rectangle: %d",area);
	
	return 0;
}
