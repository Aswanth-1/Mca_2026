number based operation(switch)

#include <stdio.h>

int main() {
    int num, choice, i;
    long long factorial;
    int reverse, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Check Even/Odd\n");
        printf("2. Find Factorial\n");
        printf("3. Reverse Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(num % 2 == 0)
                    printf("%d is Even\n", num);
                else
                    printf("%d is Odd\n", num);
                break;

            case 2:
                factorial = 1;
                for(i = 1; i <= num; i++) {
                    factorial = factorial * i;
                }
                printf("Factorial of %d = %lld\n", num, factorial);
                break;

            case 3:
                reverse = 0;
                temp = num;
                while(temp != 0) {
                    reverse = reverse * 10 + temp % 10;
                    temp = temp / 10;
                }
                printf("Reversed Number = %d\n", reverse);
                break;

            case 4:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}