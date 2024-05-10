#include <stdio.h>
int main() {
   
   int encComb;
   printf("Enter an encrypted 4-digit combination: ");
   scanf("%d", &encComb);

   int a, b, c, d;

   a = encComb / 1000;
   encComb = encComb % 1000;

   b = encComb / 100;
   encComb = encComb % 100;

   c = encComb / 10;
   encComb = encComb % 10;
   
   d = encComb;

   printf("The real combination is: %d%d%d%d\n", d, 9-b, 9-c, a);
   
   return 0;
}

