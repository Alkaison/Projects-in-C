#include<stdio.h>

void sort(int array[], int size){
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

void printSorted(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main(){

    int array[] = {9, 5, 7, 6, 8, 4, 2, 1, 3};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printSorted(array, size);

    return 0;
}