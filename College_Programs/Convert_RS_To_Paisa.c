#include<stdio.h>

int main(){
    
    int rupees, paisa;
    
    printf("Enter Rupees:");
    scanf("%d", &rupees);

    paisa = rupees * 100;
    printf("Paisa: %d \n", paisa);
    
    return 0;
}