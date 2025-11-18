#include <stdio.h>
#include <stdlib.h>

void troca_valor(float *x, float *y) {
  float c = (*x);
  (*x) = (*y);
  (*y) = c;
}

int main () {
  float a = 10, b = 5;
  printf("Valor 1: %f\nValor 2: %f\n", a, b);
  
  troca_valor(&a, &b);
  printf("Depois da mudança:\n");
  printf("Valor 1: %f\nValor 2: %f\n", a, b);
}
