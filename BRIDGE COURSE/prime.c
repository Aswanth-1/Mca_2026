8. Program to check if the given number is prime or not. 
#include <stdio.h>
int main()
{
    int num, i, prime = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            prime = 1;
            break;
        }
    }

    if (prime == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}