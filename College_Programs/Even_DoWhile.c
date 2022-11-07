//write a program to print even numbers from 1 to 50 using do-while loop.
#include<stdio.h>

int main(){
	
	int i=1;
	printf("Even Numbers from 1 to 50: \n");
	
	do
	{
		if(i%2==0)
		{
			printf("%d\n",i);		
		}
		i++;
	} while (i<=50);
	
	return 0;
}
