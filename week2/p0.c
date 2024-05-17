#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  printf("Hello world!\n");

  int a = pow(2,3);
  int b = sin(90);
  int c = cos(0);

  printf("pow(2,3)=%d\n", a);
  printf("sin(90)=%d\n", b);
  printf("cos(0)=%d\n", c);


  //  A number netween 0 and RAND_MAX
  int randomNumber_a = rand();
  printf("Random number: %d\n", randomNumber_a);

  // //  A number netween 0 and 99
  // int randomNumber_b = rand() % 100;
  // printf("Random number between 0 and 99: %d\n", randomNumber_b);


  // int min = 10;
  // int max = 20;
  // int randomNumber_c = min + rand() % (max - min + 1);
  // printf("Random number between %d and %d: %d\n", min, max, randomNumber_c);
  

  return 0;
}