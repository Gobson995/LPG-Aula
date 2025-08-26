#include <stdio.h>

int main () {
  int a = 6;
  int b = 7;

  float c = (float) (a+b) / 2; //typecast

  printf("%f\n", c);

  return 0;
}