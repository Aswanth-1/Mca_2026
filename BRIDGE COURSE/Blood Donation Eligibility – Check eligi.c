Blood Donation Eligibility – Check eligibility based on age, weight, and hemoglobin level.

#include <stdio.h>
int main() 
{
     int age,weight;
     float hemo;

     printf("enter the age: ");
     scanf("%d",&age);
     printf("enter the weight: ");
     scanf("%d",&weight);
     printf("enter the hemoglobin level");
     scanf("%f",&hemo);

     if(age>18)
     {
        if(weight>60)
        {
            if(hemo>7)
            {
                printf("You are eligible for Blood donation");
            }
            else
            {
                printf("Sorry!! you have a low hemoglobin level");
            }
        }
        else
        printf("sorry!! you are underweight");
     }
     else
     {
        printf("Sorry!! You are underage");
     }
     return 0;
}
