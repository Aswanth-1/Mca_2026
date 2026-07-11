#include <stdio.h>

int main() 
{
   int secret = 25;
   int guess, count = 0;

   do {
       printf("Guess the number (20-30): ");
       scanf("%d", &guess);

       count++;

       if(guess != secret)
           printf("Wrong Guess! Try Again.\n");

   } while(guess != secret);

   printf("Correct! Secret Number = %d\n", secret);
   printf("Attempts = %d", count);

   return 0;
}
