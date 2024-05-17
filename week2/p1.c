#include <stdio.h>
#include <math.h>

int main(){
  
  int x = 2;
  int n = 3;
  int y = 90;
  int z = 0;

  double r;
  r = (pow(x,n) + 6 * pow(x, 4.0)) / ( sin(y) + cos(z));
  
  printf("Result: %f\n", r);

  return 0;
}