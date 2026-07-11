6. Find the sum of first n numbers using while loop
a. Example if n is 4 the answer is 10

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d numbers is %d",n,sum);
    return 0;
}       