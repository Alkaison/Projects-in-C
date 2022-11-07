#include<stdio.h>

void sort(char array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            //just change the operator in "if" condition
            //to print ascending order of sorting use > symbol
            //to print descending order of sorting use < symbol
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printSorted(char array[], int size){
    for(int i = 0; i < size; i++){
        printf("%c ", array[i]);
    }
}

int main(){

    char array[] = {'B', 'K', 'L', 'A', 'J', 'C'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printSorted(array, size);

    return 0;
}