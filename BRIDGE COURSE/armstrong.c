#include <stdio.h>
#include <math.h>

int main() {
   int num, temp, rem, digits = 0;
   int sum = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   temp = num;

   do {
       digits++;
       temp /= 10;
   } while(temp != 0);

   temp = num;

   do {
       rem = temp % 10;
       sum += pow(rem, digits);
       temp /= 10;
   } while(temp != 0);

   if(sum == num)
       printf("Armstrong Number");
   else
       printf("Not an Armstrong Number");

   return 0;
}
