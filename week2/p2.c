#include <stdio.h>
#include <stdlib.h>

int main() {

  int randomChoice = (rand() % 151 - 75) * 2;
  printf("Random number: %d\n", randomChoice);
  return 0;
  
}