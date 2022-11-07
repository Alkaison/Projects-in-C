#include<stdio.h>

int main(){

    int cnt_baby=0, cnt_school=0, cnt_adult=0, input;

    for(int i=1; i <= 15; i++)
    {
        error:
        printf("Enter the age [%d]: ",i);
        scanf("%d",&input);

        if(input < 0)
        {
            printf("Invalid age.");
            goto error;
        }
        else if(input > 0 && input <= 5)
        {
            cnt_baby++;
        }
        else if(input > 5 && input <= 17)
        {
            cnt_school++;
        }
        else if(input > 17)
        {
            cnt_adult++;
        }
    }

    printf("Total Baby Count: %d \n",cnt_baby);
    printf("Total School Boy Count: %d \n",cnt_school);
    printf("Total Adult Count: %d \n",cnt_adult);

    return 0;
}