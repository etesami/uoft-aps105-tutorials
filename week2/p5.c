#include <stdio.h>

int mostSignificantDigit(int number) {
  int leadingDigit;
  while (number > 0) {
    leadingDigit = number % 10;
    number /= 10;
  }
  return leadingDigit;
}

int main() {
  
  int number;
  scanf("%d", &number);
  int leadingDigit = mostSignificantDigit(number);
  printf("%d\n", leadingDigit);
  printf("%d\n", mostSignificantDigit(number));
  
  return 0;
}