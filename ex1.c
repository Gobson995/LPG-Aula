#include <stdio.h>
#include <stdlib.h>

void inc_dec(int *a, int *b) {
  (*a)++;
  (*b)--;
}

int main () {
  int a = 10, b = 5;
  inc_dec(&a, &b);
  printf("Valor 1: %d\nValor 2: %d\n", a, b);
}

