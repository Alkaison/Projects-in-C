#include<stdio.h>
//must include string.h to use the functions of string.
#include<string.h>

int main(){

    //declaring two string variables and storing first and last name.
    char string1[] = "Ganesh";
    char string2[] = "Mourya";

    //strlwr() - is used to convert the string to lower case
    strlwr(string1);
    printf("Lower: %s\n", string1);

    //strupr() - is used to convert the string to UPPER CASE
    strupr(string1);
    printf("Upper: %s\n", string1);

    //strcat() - is used to append string 2 to end of string1
    strcat(string1, string2);
    printf("Append: %s\n", string1);

    //strcpy() -is used to copy string2 to string1
    strcpy(string1, string2);
    printf("Copy: %s\n", string1);

    //strset() - is used to set all charcters of a string to a given charcter
    strset(string1, '#');
    printf("Set: %s\n", string1);

    //strnset() - is used to set n characters of a string to a given character
    strnset(string1, '*', 3);
    printf("Set number String: %s\n", string1);

    //strrev() - is used to reverse the string charcters
    strrev(string1);
    printf("Reverse: %s\n", string1);

    //Next functions are INTEGER type, so we have to use a int variable to store the value.
    //strlen() - is used to return the length of the string
    int result = strlen(string1);
    printf("Length: %d\n", result);

    //strcmp() - is used to compare the all string characters (if both strings are same it will return 0 else a random number).
    result = strcmp(string1, string2);
    printf("Compare: %d\n", result);

    //strcmpi() - is used to compare string characters (ignoring case senstitive)
    result = strcmpi(string1, string2);
    printf("Compare (ignorning case): %d\n", result);

    //if condition for better understanding...
    if(result==0)
        printf("The strings are same.\n");
    else
        printf("The strings are not same.\n");
    
    return 0;
}