#include <stdio.h>
int main() {
   
   int sum = 0;
   for (int number = 1; number <= 999; number++) {
      // divisible by 9 and is even:
      // number % 9 == 0
      // AND
      // number % 2 == 0
      if (number % 9 == 0 && number % 2 == 0) {
         // Computes the ten's digit
         int tenDigit = number / 10 - (number / 100) * 10;
         if (tenDigit != 7) {
            sum += number;
         }
      }
   }
   printf("Sum: %d\n", sum);
   return 0;
}

