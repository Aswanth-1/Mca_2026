Menu driven bitwise operators using switch statement

#include<stdio.h>
int main()
{

    int choice, a, b, result;
    printf("Menu:\n");
    printf("1. AND\n");
    printf("2. OR\n");
    printf("3. XOR\n");
    printf("4. NOT\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = a & b;
            printf("Result of %d AND %d is: %d\n", a, b, result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = a | b;
            printf("Result of %d OR %d is: %d\n", a, b, result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = a ^ b;
            printf("Result of %d XOR %d is: %d\n", a, b, result);
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d", &a);
            result = ~a;
            printf("Result of NOT %d is: %d\n", a, result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}