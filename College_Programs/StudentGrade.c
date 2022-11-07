#include<stdio.h>

int main(){
    
    int cgpa;

    printf("Enter your annual CGPA: ");
    scanf("%d",&cgpa);

    if(cgpa > 100 || cgpa < 0)
    {
        printf("Wrong Input.");
    }
    else if(cgpa > 0 && cgpa < 35)
    {
        printf("Grade: Fail");
    }
    else if(cgpa >= 35 && cgpa < 50)
    {
        printf("Grade: E");
    }
    else if(cgpa >= 50 && cgpa < 60)
    {
        printf("Grade: D");
    }
    else if(cgpa >= 60 && cgpa < 70)
    {
        printf("Grade: C");
    }
    else if(cgpa >= 70 && cgpa < 80)
    {
        printf("Grade: B");
    }
    else if(cgpa >=80 && cgpa < 90)
    {
        printf("Grade: A");
    }
    else if(cgpa >= 90 && cgpa < 100)
    {
        printf("Grade: A+");
    }
    else
    {
        printf("Bohot Tez horahe ho!");
    }

    return 0;
}