3. Find the sum of digits of a given number using function 

#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;

    while(n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumOfDigits(num));

    return 0;
}