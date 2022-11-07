#include<stdio.h>

int main(){
    
    int a, b;
    
    printf("Enter A: ");
    scanf("%d",&a); // 10

    printf("Enter B: ");
    scanf("%d",&b); // 20

    a = a + b; // A = 10 + 20; A = 30; 
    b = a - b; // B = 30 - 20; B = 10; 
    a = a - b; // A = 30 - 10; A = 20; 

    printf("Swapped Numbers: \nA: %d \nB: %d \n", a, b);

    return 0;
}