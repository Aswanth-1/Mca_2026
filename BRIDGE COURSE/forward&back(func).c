Creating two functions named forward and backward takes a positive number as  argument and displays from 1 to n and n to 1 respectively. 

#include<stdio.h>

void forward(int n)
{
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
void backward(int n)
{
    for(int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
}
int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    
    printf("Forward: ");
    forward(n);
    
    printf("\nBackward: ");
    backward(n);
    
    return 0;
}