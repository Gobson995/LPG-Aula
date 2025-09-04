#include <stdio.h>
#include <stdlib.h>

#define N 8

int main () {
  int v[N] = {31, 12, 0, 91, 7, -8, 11, 16};

  int menor = v[0];
  int pos = 0;

  for (int i = 1; i < N; i++) {
    if (v[i] < menor) {
      menor = v[i];
      pos = i;
    }
  }

  printf("O menor valor é: %d.\nE está na posição: %d.\n", menor, pos);
}

// não precisa guardar o menor valor...