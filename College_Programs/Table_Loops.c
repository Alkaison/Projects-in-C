//write a program to print the table of 5
#include<stdio.h>

int main(){
	
	int i, table=5,result;
	
	for(i=1;i<=10;i++)
	{
		result=table*i;
		printf("%d x %d = %d\n",table,i,result);
	}
	
	return 0;
}
