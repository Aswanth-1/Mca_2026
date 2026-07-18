Loan Approval – Approve or reject a loan based on salary, credit score, and employment status.

#include <stdio.h>
int main() 
{
     int salary,credit;
     char emp;
    

     printf("enter the salary: ");
     scanf("%d",&salary);
     printf("enter the credit Score: ");
     scanf("%d",&credit);
     printf("Are you employed or not?(Y/N)");
     scanf("%c",&emp);

     if(salary>25000)
     {
        if(credit>50)
        {
            if(emp== 'y' ||emp== 'Y' )
            {
                printf("Loan Approved!!!!!!!!!!!");
            }
            else
            {
                printf("Sorry!!!get a job");
            }
        }
        else
        printf("sorry!! low credit score");
     }
     else
     {
        printf("Sorry!! low salary");
     }
     return 0;
}
