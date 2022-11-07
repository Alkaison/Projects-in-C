#include<stdio.h>
//String.h is needed to use string functions like strcpy().
#include<string.h>

int main(){
    /*
        2D Arrays - an Array where each element is an entire array 
                   useful if you need a matrix, grid or table of data.

        int numbers[rows][columns] -- first square bracket represents mumber of rows in the matrix & 
                                      second square bracket represents numberes of columns in the matrix.
                    Ex. int numbers[2][3];
                    
        Ex. numbers[1][1] = 23.20;
        -- we can also use assignment operator to assign a specific value to an element of 2D Array.
    */
    int numbers[4][3] = {
                         {1, 2, 3}, 
                         {4, 5, 6},
                         {7, 8, 9},
                         {9, 8, 7}
                        };

    //code to get the number of rows and columns
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    //print the values of the 2D Array
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", numbers[i][j]);
        }
            printf("\n");
    }

    //Arrays of String 
    char cars[][10] = {"Lambo", "Mustang", "THAR"};

    //print array of strings using loop
    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s \n", cars[i]);
    }

    //swapping of characters
    char x = 'X';
    char y = 'Y';
    char temp;
    
    temp = x;
    x = y;
    y = temp;

    printf("X = %c\n", x);
    printf("Y = %c\n", y);

    //swapping of strings
    char a[10] = "Mango";
    char b[10] = "Orange";
    char tempo[10];

    strcpy(tempo, a);
    strcpy(a, b);
    strcpy(b, tempo);

    printf("Mango = %s\n", a);
    printf("Orange = %s\n", b);

    return 0;
}