#include <stdio.h>

int main() {
   int a, b, choice;
   int result = 0;
   int memory = 0;

   printf("Enter two numbers: ");
   scanf("%d%d", &a, &b);

   printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus\n");
   printf("Enter choice: ");
   scanf("%d", &choice);

   switch(choice) {
       case 1:
           result = a + b;
           break;
       case 2:
           result = a - b;
           break;
       case 3:
           result = a * b;
           break;
       case 4:
           result = a / b;
           break;
       case 5:
           result = a % b;
           break;
       default:
           printf("Invalid Choice");
           return 0;
   }

   printf("Result = %d\n", result);

   printf("\n1. MS\n2. MR\n3. MS+\n");
   printf("Enter Memory Choice: ");
   scanf("%d", &choice);

   switch(choice) {
       case 1:
           memory = result;
           printf("Stored = %d", memory);
           break;
       case 2:
           printf("Memory = %d", memory);
           break;
       case 3:
           memory += result;
           printf("Updated Memory = %d", memory);
           break;
       default:
           printf("Invalid Choice");
   }

   return 0;
}
